#include <iostream>
#include <cmath>
using namespace std;
int enteropositivo(){
    int n;
    cout << "ingrese un numero entero positivo, si quiere terminar que el  programa termine digite 0 --> ";
    cin>>n;
    while (n < 0){
        cout<<"Por favor, ingrese un numero positivo";
        cin>>n;
    }
    return n;
}
bool numeroPerfecto(int n){
    int comparar = 0;
    int i = 1;
    while (i<n){
        if(n%i == 0){
            comparar += i;
            i++;
        }
        else{
            i++;
        }

    }
    if (comparar == n){
        return 1;
    }
    else {
        return 0 ; 
    }

}
int main (){
    int n = enteropositivo();
    do{
        if (numeroPerfecto(n)){
            cout<<"El numero " << n << " es un numero perfecto" << endl;
        }
        else {
            cout<<"El numero " << n << " no es un numero perfecto" << endl;
        }
        n = enteropositivo();
    }while (n !=0);
    cout<<"El programa ha terminado"<< endl;

}