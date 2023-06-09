#ifndef MOTO_H
#define MOTO_H
#include <iostream>
#include "VeiculoPasseio.h"

using namespace std;

class Moto : public VeiculoPasseio{
    private:
        int cilindradas;
    public:
        Moto();
        Moto(const double, const string, const int, const int);
        ~Moto();
        void setCilindradas(const int);
        int getCilindradas();
        virtual double IPVA();
        virtual void imprime();
        virtual double valorSeguro(const int);
};

Moto::Moto(){
    this->cilindradas = 0;
}

Moto::Moto(const double p, const string m, const int a, const int c) : VeiculoPasseio(p, m, a){
    this->cilindradas = a;
}

Moto::~Moto(){

}

void Moto::setCilindradas(const int c){
    this->cilindradas = c;
}

int Moto::getCilindradas(){
    return this->cilindradas;
}


double Moto::IPVA(){
    return VeiculoPasseio::IPVA()*0.02;
}

void Moto::imprime(){
    VeiculoPasseio::imprime();
    cout << "O veiculo percorreu " << cilindradas << " Cilindradas." << endl;
}

double Moto::valorSeguro(const int atual){
    int Y;
    Y = atual - VeiculoPasseio::getAnoFabricacao();
    return (Veiculo::getPreco()*0.03)*(1+(0.02*Y));
}

#endif
