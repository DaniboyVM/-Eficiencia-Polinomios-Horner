#include <iostream>

using namespace std;

void imprimirPolinomio(const double* polinomio, int grado);

double* crearPolinomio(int grado);


int main(){




}


void imprimirPolinomio(const double* polinomio, int grado) {
   cout<<polinomio[grado]<<"x^"<<grado;

    for(int i=grado-1; i>=1; i--){
        if(polinomio[i]>0){
            cout<<" +"<<polinomio[i]<<"x^"<<i;
        }else{
            if(polinomio[i] < 0){
                cout<<" "<<polinomio[i]<<"x^"<<i;
            }

        }


    }
    if(polinomio[0] > 0){
        cout<<" +"<<polinomio[0];
    }else{
        if(polinomio[0] < 0){
            cout<<" "<<polinomio[0];

        }
    }

}


double* crearPolinomio(int grado) {
    double* polinomio = new double[grado + 1]; //---------------------------------------------------------
    cout << "Ingrese los coeficientes del polinomio (desde el de mayor grado hasta el independiente ):\n";
    for (int i = grado; i >= 0; i--) {
         do{
            cout << "Coeficiente para x^" << i << ": ";
            cin >> polinomio[i];
        }while( polinomio[grado] == 0 );

    }
    return polinomio;
}
