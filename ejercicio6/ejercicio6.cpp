#include <iostream>
#include <String>
#include <cmath>
using namespace std;
int verificarRango(){
    int n;
    cout<<"Ingresa un numero mayor 1: ";
    cin>>n;
    while(n<2){
        cout<<"El numero ingresado no es mayor que 1: ";
        cin>>n;
    }
    cout<<"El numero ingresado es: "<< n <<endl;;
    return n;
    
} 
int encontrarFactor (int n){
    int i  = 1;
    int factor;
    do {
    i++;
    if (i = sqrt(n)){
        return -2;
    }
    } while (n%i != 0) ;
    return i;
}
int main (){
    string FacotresPrimos = "";
    int repeticiones = 0 ;
    int factor;
    int n = verificarRango();
    int valorInicial = n;
    factor = encontrarFactor(n);
    FacotresPrimos += to_string(factor);
    n = n / factor;
    do{
        factor = encontrarFactor(n);
        if (factor == -2){

            repeticiones = 1;
            break;
        }
        FacotresPrimos += " X " + to_string(factor);
        n = n / factor;
        repeticiones++;

    }while (n != 1);
    if (factor == -2){
        cout << valorInicial<< " = "<< valorInicial<<endl;
        cout << "El numero inicial es primo"<<endl;
        cout << "Numero de factores: "<<repeticiones << endl;


        }
    else{
        cout << valorInicial<< " = " << FacotresPrimos<< endl;
        cout << "El numero inicial  no es primo"<<endl;
        cout << "Numero de factores: "<< repeticiones << endl;
    }
    
    
}