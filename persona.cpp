#include<iostream>
using namespace std;

class persona{
    protected: string nombre, apellido;

    protected: persona(){
    }
    persona(string nom, string ape){
        nombre=nom;
        apellido=ape;
    }

    void mostrar();
};