#include <iostream>
using namespace std;
int mcd (int a, int b){
    int c;
        while (b!= 0){
        c = a%b;
        a = b;
        b = c ;

    }
    return a;

}
int mcm(int num1, int num2, int a ){
    int resultado = (num1 * num2)/a;
    return resultado;

}
int main () {
    int num1, num2,a,b,c;
    cout<< "Ingrese el primer numero: ";
    cin>>num1;
    cout<< "Ingrese el sugundo numero: ";
    cin>>num2;
    a = num1;
    b = num2;
    int maximocomundivisor = mcd(a, b);
    int minimocomunmultiplo = mcm(num1, num2, maximocomundivisor);
    cout <<"El MCD de "<< num1 << " y " << num2 << " es: " << maximocomundivisor << endl;
    cout <<"El MCM de "<< num1 << " y " << num2 << " es: " << minimocomunmultiplo << endl;

}