#include <iostream>
#include <string>
using namespace std;
string obtenerContraseña (){
    string contraseña = "";
    cout<<"Escriba una contraseña: ";
    getline(cin, contraseña);
    return contraseña; 
}
int evaluarSeguridad (string contraseña){
    int mayusculas = 0;
    int minusculas = 0;
    int numeros = 0;
    int tamañoContraseña = contraseña.size();
    int numeroCriteriosCumplidos = 0;
    for (int i = 0; i< contraseña.size() ;i++){
        if ('a' <= contraseña[i] && contraseña[i] <= 'z'){
            minusculas++;
        }
        if ('A' <= contraseña[i] && contraseña[i] <= 'Z'){
            mayusculas++;
        }
        if('0' <= contraseña[i] && contraseña[i] <= '9'){
            numeros++;
        }
    }
    if (tamañoContraseña >= 8){
        numeroCriteriosCumplidos++;
    }
    if (minusculas > 0){
        numeroCriteriosCumplidos++;
    }
    if (mayusculas > 0){
        numeroCriteriosCumplidos++;
    }
    if (numeros > 0){
    numeroCriteriosCumplidos++;
    }
    return numeroCriteriosCumplidos;
}
int main (){
    string contraseña = obtenerContraseña();
    int nivelSeguridad = evaluarSeguridad(contraseña); 
    cout<<"Nivel de seguridad : ";
    if (nivelSeguridad >= 2 && nivelSeguridad != 4){
        cout<<"Medio"<<endl;
    }
    else if (nivelSeguridad == 4){
        cout<<"fuerte"<<endl;
    }
    else {
        cout<<"bajo"<<endl;
    }
}
