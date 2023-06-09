#ifndef VEICULOTRANS_H
#define VEICULOTRANS_H
#include <iostream>
#include "Veiculo.h"

using namespace std;

class VeiculoTrans : public Veiculo{
private:
    int numPassageiros;
public:
    VeiculoTrans();
    VeiculoTrans(const double, const string, const int);
    ~VeiculoTrans();
    void setNumPassageiros(const int);
    int getNumPassageiros();
    virtual double IPVA();
    virtual void imprime();
    virtual double valorTarifa() = 0;
};

VeiculoTrans::VeiculoTrans(){
    
    this->numPassageiros = 0;
}

VeiculoTrans::VeiculoTrans(const double p, const string m, const int n) : Veiculo(p, m){
    this->numPassageiros = n;
}

VeiculoTrans::~VeiculoTrans(){

}

void VeiculoTrans::setNumPassageiros(const int n){
    this->numPassageiros = n;
}

int VeiculoTrans::getNumPassageiros(){
    return this->numPassageiros;
}

void VeiculoTrans::imprime(){
    Veiculo::imprime();
    cout << "O Veiculo transporta " << this->numPassageiros << " passageiros." << endl;
}

double VeiculoTrans::IPVA(){
    return Veiculo::getPreco();
}

#endif
