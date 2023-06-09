#include <iostream>
#include <iomanip>
#include "Onibus.h"
#include "Taxi.h"
#include "Carro.h"
#include "Moto.h"

using namespace std;

int main(){
    cout << setprecision(2)<< fixed;
	{
        Onibus O(150000.00, "Mercedes", 30, 3.00);
        Taxi T(35000.00, "Honda Civic", 4, 2.00, 3.00, 5);
        Carro C(200000.00, "BMW", 2017, 4);
        Moto M(3000.00, "Yamarra", 2018, 2000);

        Veiculo* vetor[4];
        VeiculoTrans* VTrans[2];
        VeiculoPasseio* VPasseio[2];

        vetor[0] = &O;
        vetor[1] = &T;
        vetor[2] = &C;
        vetor[3] = &M;

        VTrans[0] = &O;
        VTrans[1] = &T;

        VPasseio[0] = &C;
        VPasseio[1] = &M;

        cout << "Tentando Imprimir alocando em Veiculo: " << endl << endl;
        for(int i = 0; i < 4; i++){
            vetor[i]->imprime();
            cout << endl;
        }
        cout << "====================================================================" << endl;
        cout << "Veiculo Transporte: " << endl << endl;
        for(int i = 0; i < 2; i++){
            VTrans[i]->imprime();
            cout << endl;
        }
        cout << endl;
        cout << "Veiculo Passeio: " << endl << endl;
        for(int i = 0; i < 2; i++){
            VPasseio[i]->imprime();
            cout << endl;
        }
	}
    

    return 0;
}
