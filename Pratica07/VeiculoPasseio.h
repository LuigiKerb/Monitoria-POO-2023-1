#ifndef VEICULOPASSEIO_H
#define VEICULOPASSEIO_H
#include <iostream>
#include "Veiculo.h"

using namespace std;

class VeiculoPasseio : public Veiculo{
    private:
        int anoFabricacao;
    public:
        VeiculoPasseio();
        VeiculoPasseio(const double, const string, const int);
        ~VeiculoPasseio();
        void setAnoFabricacao(const int);
        int getAnoFabricacao();
        virtual double IPVA();
        virtual void imprime();
        virtual double valorSeguro(const int) = 0;
};

VeiculoPasseio::VeiculoPasseio(){
    this->anoFabricacao = 2000;
}

VeiculoPasseio::VeiculoPasseio(const double p, const string m, const int a) : Veiculo(p, m){
    this->anoFabricacao = a;
}

VeiculoPasseio::~VeiculoPasseio(){

}

void VeiculoPasseio::setAnoFabricacao(const int a){
    this->anoFabricacao = a;
}

int VeiculoPasseio::getAnoFabricacao(){
    return this->anoFabricacao;
}

double VeiculoPasseio::IPVA(){
    return Veiculo::getPreco();
}

void VeiculoPasseio::imprime(){
    Veiculo::imprime();
    cout << "O ano de Fabricacao do Veiculo e " << anoFabricacao << endl;
}

#endif
