#ifndef TAXI_H
#define TAXI_H
#include <iostream>
#include <iomanip>
#include "VeiculoTrans.h"

using namespace std;

class Taxi : public VeiculoTrans{
    private:
        double tarifaInicial, valorKM;
        int distanciaKM;
    public:
        Taxi();
        Taxi(const double, const string, const int, const double, const double, const int);
        ~Taxi();
        void setTarifaInicial(const double);
        double getTarifaInicial();
        void setValorKM(const double);
        double getValorKM();
        void setDistanciaKM(const int);
        int getDistanciaKM();
        virtual double IPVA();
        virtual void imprime();
        virtual double valorTarifa();
};

Taxi::Taxi(){
    this->tarifaInicial = 0;
    this->valorKM = 0;
    this->distanciaKM = 0;
}

Taxi::Taxi(const double p, const string m, const int n, const double t, const double v, const int d) : VeiculoTrans(p,m,n){
    this->tarifaInicial = t;
    this->valorKM = v;
    this->distanciaKM = d;
}

Taxi::~Taxi(){

}

void Taxi::setTarifaInicial(const double t){
    this->tarifaInicial = t;
}

double Taxi::getTarifaInicial(){
    return this->tarifaInicial;
}

void Taxi::setValorKM(const double v){
    this->valorKM = v;
}

double Taxi::getValorKM(){
    return this->valorKM;
}

void Taxi::setDistanciaKM(const int d){
    this->distanciaKM = d;
}

int Taxi::getDistanciaKM(){
    return this->distanciaKM;
}

double Taxi::IPVA(){
    return VeiculoTrans::IPVA()*0.02;
}

void Taxi::imprime(){
    VeiculoTrans::imprime();
    cout << fixed << setprecision(2);
    cout << "A tarifa inicial do Taxi e R$" << tarifaInicial << endl;
    cout << "O valor da KM e R$" << valorKM << endl;
    cout << "A distancia percorrida foi de " << distanciaKM << " KMs." << endl;
}

double Taxi::valorTarifa(){
    return getTarifaInicial()+(getValorKM()*getDistanciaKM());
}

#endif
