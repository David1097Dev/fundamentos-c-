#include <iostream>
#include <string>
using namespace std;
char obtenerCaracter (string frase, int i){
    return frase[i];
}
char censurar (char caracter){
    char resultado1; 
        if (caracter   == 'a'|| caracter  == 'e'|| caracter  == 'i'|| caracter  == 'o'|| caracter  == 'u'|| caracter  == 'A'|| caracter  == 'E'|| caracter  == 'I'|| caracter  == 'O'|| caracter == 'U'){
            resultado1 = '*';
        }
        else {
            resultado1 = caracter;
        }
        return resultado1;
    }

int main (){
    string frase;
    char caracter = ' ';
    string resultado ="";
    cout<<"Ingrese una frase: ";
    getline(cin,frase);
    for (int i = 0; i < frase.size();i++){
        caracter = obtenerCaracter(frase, i);
        resultado += censurar(caracter );
    }
    cout<< resultado <<endl;
}

