#include <iostream>
#include <cmath>
using namespace std ; 
int inversioNumero (int n){
    int numeroinvertido = 0;
    while (n!=0){

        
        int digito = n %10;
        numeroinvertido = numeroinvertido*10+ digito;
        n = n/10;


    }
    return numeroinvertido;
}
bool palindromo (int n , int invertido){
    if (n == invertido){
        return 1;
    }
    else{
        return 0;
    }
}
int main () {
    int n; 
    cout<< "Ingrese un numero entero y averigua si es palindromo: ";
    cin>>n;
    int invertido = inversioNumero(n);

    if (palindromo(n,invertido)){
        cout<<"El numero es palindromo, fin del programa."<<endl;
    }
    else {
        cout<<"El numero no es palindromo, fin del programa. "<<endl;
    }
}