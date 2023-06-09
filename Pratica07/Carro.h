#ifndef CARRO_H
#define CARRO_H
#include <iostream>
#include "VeiculoPasseio.h"

using namespace std;

class Carro : public VeiculoPasseio{
    private:
        int numPortas;
    public:
        Carro();
        Carro(const double, const string, const int, const int);
        ~Carro();
        void setNumPortas(const int);
        int getNumPortas();
        virtual double IPVA();
        virtual void imprime();
        virtual double valorSeguro(const int);
};


Carro::Carro(){
    this->numPortas = 2;
}

Carro::Carro(const double p, const string m, const int a, const int n) : VeiculoPasseio(p, m, a){
    this->numPortas = n;
}

Carro::~Carro(){

}

void Carro::setNumPortas(const int n){
    this->numPortas = n;
}

int Carro::getNumPortas(){
    return this->numPortas;
}


double Carro::IPVA(){
    return VeiculoPasseio::IPVA()*0.04;
}

void Carro::imprime(){
    VeiculoPasseio::imprime();
    cout << "O Veiculo possui " << numPortas << " portas." << endl;
}

double Carro::valorSeguro(const int atual){
    int Y;
    Y = atual - VeiculoPasseio::getAnoFabricacao();
    return (Veiculo::getPreco()*0.02)*(1+(0.02*Y));
}


#endif
