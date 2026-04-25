#include <iostream>
using namespace std;
int verificarRango(){
    int n;
    cout<<"Ingresa un numerero entero entre [1-9]: ";
    cin>>n;
    if (n<1 || n>9){
        cout<<"El numero ingresado no esta entre [1-9]: \n El programa ha finalizado";
        cin>>n;
        return -1;
    }
    return n;
    
} 
int main () {
    int secuencia = 1;
    int n = verificarRango();
    if (n != -1){
        for (int cantidadfilas = 1;cantidadfilas<= n;cantidadfilas++){
            for (int elementosfilas =1; elementosfilas<=cantidadfilas;elementosfilas++){
                cout<<secuencia<<" ";
                secuencia+= 2;
            }
            cout<<endl;
        }
        
    }

}