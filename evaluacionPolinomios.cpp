#include <iostream>
#include <ctime>
#include <fstream>
#include <chrono>
#include <cmath>
enum {
    NUM_PRUEBAS = 1000,
    MIN_TAMANO = 11,
    MAX_TAMANO = 1001,
    INCREMENTO = 10
};
using namespace std;

 long long evaluarPolinomioEstandar(int polinomio[], int x, int grado) ;

 long long evaluarPolinomioHorner(int polinomio[], int x, int grado) ;

int main() {
    int polinomio[MAX_TAMANO];
    long long tiempoHoner[MAX_TAMANO], tiempoEstandar[MAX_TAMANO];
    int x;

    for(int i=MIN_TAMANO; i<= MAX_TAMANO; i+=INCREMENTO){ //ciclo para evaluar diversos exponentes
        tiempoEstandar[i/10]=0;
        tiempoHoner[i/10]=0;
        for(int j=0; j< NUM_PRUEBAS; j++){     //numero de pruebas a evaluar
            //creamos el polinomio
             for (int k = 0; k < i; k++) {
                polinomio[k] = (rand() % 10) - ( rand() % 10) ;
                if(polinomio[i-1] == 0)polinomio[i-1]=1; //condicion para el grado maximo del polinomio
              //  cout<<polinomio[k]<<", ";
            }
            cout<<endl;
            //creamos el punto X
            x = ( rand() % 10 ) - ( rand() % 10 );
            if(x == 0)x=1;
            //cout<<"valor de x:"<<x<<endl;


            auto inicio = std::chrono::steady_clock::now();
            evaluarPolinomioEstandar(polinomio, x, i);
            auto fin = std::chrono::steady_clock::now();
            auto duracion = std::chrono::duration_cast<std::chrono::nanoseconds>(fin - inicio);
            tiempoEstandar[i/10] += duracion.count();

            inicio = std::chrono::steady_clock::now();
            evaluarPolinomioHorner(polinomio, x, i);
            fin = std::chrono::steady_clock::now();
            duracion = std::chrono::duration_cast<std::chrono::nanoseconds>(fin - inicio);
            tiempoHoner[i/10]+=  duracion.count();


        }
        tiempoEstandar[i/10] = tiempoEstandar[i/10]/NUM_PRUEBAS ;
        tiempoHoner[i/10]    = tiempoHoner[i/10]/NUM_PRUEBAS ;



    }

    ofstream csvFile("TiemposPolinomios.csv");
    if (!csvFile.is_open()) {
        cerr << "Error al crear el archivo TiemposPolinomios.csv" << endl;
        return 1;
    }

    csvFile << "Grado del polinomio , Tiempo Estandar, Tiempo Honer \n";

     for(int i=11; i<= MAX_TAMANO+1 ; i+=INCREMENTO){
        csvFile<<i-1<<","<<tiempoEstandar[i/10]<<","<<tiempoHoner[i/10]<<"\n";
     }

    csvFile.close();
    cout<<"Archivo 'TiemposPolinomios.csv' generado correctamente";
    return 0;

}



long long evaluarPolinomioEstandar(int polinomio[], int x, int grado) {
    long long resultado = 0.0, potencia=1;


    for (int i = 0; i < grado; ++i) {
        for(int j = 0; j < i; ++j){
            potencia*=x;
        }
        resultado+=polinomio[i]*potencia;
        potencia=1;


     /* resultado += polinomio[i] * potencia;
        potencia *= x;
        resultado += polinomio[i] * pow(x, grado - i - 1);
       */
    }
    return resultado;
}


long long evaluarPolinomioHorner(int polinomio[], int x, int grado) {
     long long resultado =0;
    for (int i = grado; i >= 0; --i){
        resultado = resultado * x + polinomio[i];
    }
    return resultado;
}
