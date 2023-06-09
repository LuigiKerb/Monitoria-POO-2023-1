#ifndef ONIBUS_H
#define ONIBUS_H
#include <iostream>
#include <iomanip>
#include "VeiculoTrans.h"

using namespace std;

class Onibus : public VeiculoTrans{
private:
    double tarifaFixa;
public:
    Onibus();
    Onibus(const double, const string, const int, const double);
    ~Onibus();
    void setTarifaFixa(const double);
    double getTarifa();
    virtual double IPVA();
    virtual void imprime();
    virtual double valorTarifa();
};

Onibus::Onibus(){
    this->tarifaFixa = 0.01;
}

Onibus::Onibus(const double p, const string m, const int n, const double t) : VeiculoTrans(p,m,n){
    this->tarifaFixa = t;
}

Onibus::~Onibus(){

}

void Onibus::setTarifaFixa(const double t){
    this->tarifaFixa = t;
}

double Onibus::getTarifa(){
    return this->tarifaFixa;
}

double Onibus::IPVA(){
    return VeiculoTrans::IPVA()*0.01;

}

void Onibus::imprime(){
    VeiculoTrans::imprime();
    cout << fixed << setprecision(2);
    cout << "A tarifa do Onibus e R$" << tarifaFixa << endl; 
}

double Onibus::valorTarifa(){
    return getTarifa();
}

#endif
