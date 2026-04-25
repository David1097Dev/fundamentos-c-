#include <iostream>
#include <string>
using namespace std;
int main (){
    string frase;
    string resultado ="";
    cout<<"Ingrese una frase: ";

    getline(cin,frase);
    for (int i = 0; i <= frase.size();i++){
        if ( frase[i] == 'a'|| frase[i] == 'e'|| frase[i] == 'i'|| frase[i] == 'o'|| frase[i] == 'u'|| frase[i] == 'A'|| frase[i] == 'E'|| frase[i] == 'I'|| frase[i] == 'O'|| frase[i] == 'U'){
            resultado += '*';
        }
        else{
            resultado += frase[i];
        }
    }
    cout<< resultado <<endl;
}

