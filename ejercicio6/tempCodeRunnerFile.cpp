#include <iostream>
#include <string>
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
    for (int i = 2; i <= sqrt(n); i++) {
            if (n % i == 0) {
                return i;
            }
        }
    return n; // Si no hay divisores, el número mismo es primo

}
int main (){
    string FacotresPrimos = "";
    int repeticiones = 0 ;
    int factor;
    int n = verificarRango();
    int valorInicial = n;
    factor = encontrarFactor(n);
    FacotresPrimos += to_string(factor);
    repeticiones++;
    n = n / factor;
    while (n != 1){
        factor = encontrarFactor(n);
        FacotresPrimos += " X " + to_string(factor);
        n = n / factor;
        repeticiones++;

    }
    if (repeticiones ==1  ){
        cout << valorInicial<< " = "<< valorInicial<<endl;
        cout << "El numero inicial es primo"<<endl;
        cout << "Numero de factores: "<<repeticiones << endl;


        }
    else{
        cout << valorInicial<< " = " << FacotresPrimos<< endl;
        cout << "El numero inicial no es primo"<<endl;
        cout << "Numero de factores: "<< repeticiones << endl;
    }
    
    
}