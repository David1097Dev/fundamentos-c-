#include <iostream>
#include <cmath>
using namespace std;
long long verificarRango(){
    int n;
    cout<<"Ingresa un numero mayor 1: ";
    cin>>n;
    while(n<2){
        cout<<"El numero ingresado no es mayor que 1: ";
        cin>>n;
    }
    cout<<"El numero ingresado es: "<< n ;
    return n;
    
} 
long long secuenciaCollatz(long long n){
    if ( n%2 == 0){
        n = n/2;

    }
    else if (n%2 !=2){ 
        n = n*3 +1;
    }
    cout<<" --> "<< n ;
    return n;
}
int main(){
    int pasos = 0;
    long long n;
    long long valorMaximo = 0;
    n = verificarRango();
    while (n != 1){
        n = secuenciaCollatz(n);
        if (n >= valorMaximo){
            valorMaximo = n;
        }
        pasos++;
    }
    cout<<"\nPasos necesitados: " <<pasos<<endl;
    cout<<"Pasos numero maximo: "<< valorMaximo<< endl;
}