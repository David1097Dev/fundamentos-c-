#include <iostream>
using namespace std;
int rango1_6(){
    int n;
    cout<<"Ingrese un  numero en el rango [1-6]: ";
    cin>>n;
    while (n<1|| n>6){
        cout<<"Porfavor, ingrese un valor que pertenesca al intervalo [1-6] "<<endl;
        cin>>n;

    }
    return n;
}

int rango0_6(){
    int n;
    cout<<"Ingrese un  numero en el rango [1-6]: ";
    cin>>n;
    while (n<0|| n>6){
        cout<<"Porfavor, ingrese un valor que pertenesca al intervalo [1-6] "<<endl;
        cin>>n;

    }
    return n;
}



int main (){
    int n = rango1_6();
    int puntos = n;
    if (n == 1){
        cout<<"el programa ha finalizado con 0 puntos"<<endl;
        return 0;
    }
    cout<<"Si desea guardar sus puntos, dijite 0 "<<endl;
    n = rango0_6();

    while (n != 0 && n != 1){
        puntos += n;
        cout<<"-> Acumulado: "<< puntos << endl; 
        n = rango0_6();

    }

    if (n == 1){
        puntos = 0;
        cout<<"Ha perdido todos sus puntos.Fin del programa"<<endl;
    }
    if (n == 0){
        cout<<"Ha guardado sus puntos, su puntaje es: "<< puntos<<  " Fin del programa"<<endl;
    }



}