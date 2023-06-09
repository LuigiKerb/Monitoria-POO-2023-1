#ifndef VEICULO_H
#define VEICULO_H
#include <iostream>
#include <iomanip>

using namespace std;

class Veiculo {
private:
    double preco;
    string marca;
public:
    Veiculo();
    Veiculo(const double, const string);
    ~Veiculo();
    void setPreco(const double);
    double getPreco();
    void setMarca(const string);
    string getMarca();
    virtual double IPVA() = 0;
    virtual void imprime();
};

Veiculo::Veiculo(){
    this->preco = 0;
    this->marca = "N/A";
}

Veiculo::Veiculo(const double p, const string m){
    this->preco = p;
    this->marca = m;
}

Veiculo::~Veiculo(){

}

void Veiculo::setPreco(const double p){
    this->preco = p;
}

double Veiculo::getPreco(){
    return this->preco;
}

void Veiculo::setMarca(const string m){
    this->marca = m;
}

string Veiculo::getMarca(){
    return this->marca;
}

void Veiculo::imprime(){
    cout << fixed << setprecision(2);
    cout << "Informacoes do Veiculo: " << endl;
    cout << "O preco do veiculo e R$" << this->preco << endl;
    cout << "A marca do veiculo e " << this->marca << endl;
}


#endif
