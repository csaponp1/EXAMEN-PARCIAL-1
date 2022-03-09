#include "persona.cpp"
#include<stdio.h>
#include<stdio.h>
#include<iostream>
using namespace std;

class estudiante:persona{
    //atributo

    private: string nombre_curso;
    int codigo;
    int nota1,nota2,nota3,nota4;
    float promedio;

    //constructor
    public: estudiante(){
    }
    estudiante(string nom, string ape, int cod, string curso, int n1, int n2, int n3, int n4): persona(nom, ape){
        codigo=cod;
        nombre_curso=curso;
        nota1=n1;
        nota2=n2;
        nota3=n3;
        nota4=n4;
    }

    float CalcularPromedio(){
                float suma=(nota1+nota2+nota3+nota4)/4;
                promedio=suma;
                return promedio;
            }

    void mostrar(){
        cout<<"Estudiante :"<<nombre<<endl;
        cout<<"Apellido : " <<apellido<<endl;
        cout<<"codigo: "<<codigo<<endl;
        cout<<"Curso: "<<nombre_curso;
    }

 
};