#include <iostream>
using namespace std;
int main(){
    int i = 0;
    string cadena;
    cout<<"Ingrese una cadena: ";
    getline(cin, cadena);
        if ( cadena[0] >= 'a' && cadena[0] <= 'z'  ){
            cout<<(char)(((int)cadena[i]) - 32);
        }
        else{
            cout<<cadena[i];
        }
        i++;
    for (i ; i< cadena.size(); i++){

        if (cadena[i] == ' '){
            cout<<cadena[i];
            cout << (char)(((int)cadena[i + 1]) - 32);
            i++;
        }
        else{
            cout<<cadena[i];

        }
    }

    
}