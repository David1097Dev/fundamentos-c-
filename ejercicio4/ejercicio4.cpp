#include <iostream>
#include <cmath>
using namespace std;

int validarRangoNumero(){
    int n;
    do{
        cout<<"Ingrese un numero entero en el rango [1 - 225]: "; 
        cin>>n;
        if (n<1 || n>225){
            cout<<"El numero que ha ingresado, no entra en el rango establecido.El numero ha sido descartado"<<endl;
        }

    } while (n<1|| n>225);
    return n;
}
int potenciaMascercana(int n){
    int potencia = 1;
    while (pow(2,potencia)<=n){
        potencia++;
    }
    if (pow(2,potencia)>n){
        potencia--;
    }
    return potencia;
}
string calculoBinario(int potencia, int n){
    string resultado = "";
    do{
        if (pow(2,potencia)<=n){
            n = n - (pow(2,potencia));
            resultado = resultado + "1";
            potencia--;
        }
        else if (pow(2,potencia)>n){
            resultado = resultado + "0";
            potencia--;
        }

    }while (potencia>=0);
    cout<<resultado<<endl;
    return resultado;

}
string calculoHexagesimal(int n){
    string caracteres = "0123456789ABCDEF";
    string conversion = "";
    int residuo = 0;
    do{
        residuo = n%16;

        if (residuo<10){
            conversion = (char)residuo + conversion;
            
        }
        if (residuo >=10){
            conversion = caracteres[residuo] + conversion;

        }
        n = n /16;    
    }while (n > 0);
    cout<<conversion<<endl;
    return conversion;

}
int main (){
    int n = validarRangoNumero();
    int potencia = potenciaMascercana(n);
    string converisonBaseDos = calculoBinario(potencia,n);
    string conversionBase16 = calculoHexagesimal(n);
}