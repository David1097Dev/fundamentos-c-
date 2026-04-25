#include <iostream>
using namespace std;
int main () {
    int num1, num2,a,b,c;
    bool iguales = false;
    cout<< "Ingrese el primer numero: ";
    cin>>num1;
    cout<< "Ingrese el sugundo numero: ";
    cin>>num2;
    if ((num1%2==0 && num2%2==0)||(num1%2!=0 && num2%2!=0)){
        iguales = true;
    }
    a = num1;
    b = num2;
    while (b!= 0){
        c = a%b;
        a = b;
        b = c ;

    }
if (iguales){
    cout <<"El MCD de "<< num1 << " y " << num2 << " es: " << a << endl;
}
else{
    cout <<"El MCM de "<< num1 << " y " << num2 << " es: " << (num1 * num2)/a << endl;
}    
}