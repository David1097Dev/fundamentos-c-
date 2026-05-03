#include <iostream>
using namespace std;
 char capitalizar(string cadena,int i){
    char caracter = ' ' ;
    if (cadena[i-1] == ' '){
        caracter = cadena[i] -32 ;
    }
    else{
        caracter = cadena[i];
    }
    return caracter;
}
int main(){
    int i = 0;
    string cadena;
    cout<<"Ingrese una cadena: ";
    getline(cin, cadena);
        if ( cadena[0] >= 'a' && cadena[0] <= 'z'  ){
            cout<<char(((int)cadena[i]) - 32);
        }
        else{
            cout<<cadena[i];
        }
        i++;
    for (i= 1 ; i< cadena.size(); i++){
        cout<<capitalizar(cadena, i);
        
    }

    
}