#include <iostream>
using namespace std;
float validarRangoNota(float x,float y){
    float n;
    do{
        cout<<"Ingrese una nota en el rango [0.0 - 5.0]: "; 
        cin>>n;
        if (n<x || n>y){
            cout<<"La nota que ha ingresado, no entra en el rango establecido.La nota ha sido descartada"<<endl;
        }

    } while (n<x|| n>y);
    return n;
}
int aprueba(float n){
    if (n >= 3){
        return 1;
    }
    else if(n < 3 && n != -1) {
        return 0;
    }
    else {
        return -1;
    }
}
int relacionNotas(float n, float notaMayor , float notaMenor){
    if (n> notaMayor){
        return 1;
    }
    else if (n< notaMenor && n != -1){
        return 0;
    }
    else {
        return -1;
    }
}

int main (){
    int estudiantesAprobados = 0;
    int estudiantesReprobados = 0;
    int cantidadNotas = 0 ;
    float sumaNotas=0;
    float n = validarRangoNota(0,5);
    sumaNotas += n;
    float notaMayor = n;
    float notaMenor = n;
    cantidadNotas++;
    int aprobacion = aprueba(n);
    if (aprobacion == 1){
        estudiantesAprobados++;
    } 
    else if (aprobacion == 0){
        estudiantesReprobados++;
    }
    
    while (n!=-1){
        n = validarRangoNota(-1,5);
        aprobacion = aprueba(n);
        cantidadNotas++;
        if (n != -1){
            sumaNotas += n;
        }
        int relacionnotas = relacionNotas(n,notaMayor,notaMenor);
            if (relacionnotas == 1){
                notaMayor = n;
            }
            else if (relacionnotas == 0){
                notaMenor = n;
            }
            if (aprobacion == 1){
                estudiantesAprobados++;
            } 
            else if (aprobacion == 0){
            estudiantesReprobados++;
            }

        
    }
    if(n == -1){
        cantidadNotas--;
        cout<<"Cantidad de notas ingresadas: "<< cantidadNotas<< endl;
        cout<<"Cantidad de estudiantes aprobados: "<< estudiantesAprobados<< endl;
        cout<<"Cantidad de estudiantes reprobados: "<< estudiantesReprobados<< endl;
        cout<<"Nota mayor: "<< notaMayor<< endl;
        cout<<"Nota menor: "<< notaMenor<< endl;
        cout<<"Promedio de notas: "<< sumaNotas/cantidadNotas<< endl;

    }

}