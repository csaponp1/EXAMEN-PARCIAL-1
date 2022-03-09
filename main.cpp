#include "estudiante.cpp"
#include<iostream>
#include<stdio.h>

using namespace std;

int main(){
    string nombre,apellido,curso;
	int codigo;
    int nota1,nota2,nota3,nota4;
    float promedio;
    string op;

    do{
    cout<<"Ingrese Nombres:"<<endl;
	cin>>nombre;
	cout<<"Ingrese Apellidos:"<<endl;
	cin>>apellido;
	cout<<"Ingrese Curso:"<<endl;
	cin>>curso;
	cout<<"Ingrese Codigo"<<endl;
	cin>>codigo;
    cout<<"Ingrese nota 1: "<<endl;
    cin>>nota1;
    cout<<"ingrese nota 2: "<<endl;
    cin>>nota2;
    cout<<"ingrese nota 3: "<<endl;
    cin>>nota3;
    cout<<"ingrese nota 4:"<<endl;
    cin>>nota4;

    estudiante obj = estudiante(nombre,apellido,codigo,curso,nota1,nota2,nota3,nota4);
    promedio=obj.CalcularPromedio();
    cout<<"promedio: "<<promedio<<endl;;
    
    obj.mostrar();
    if(promedio>60)
        cout<<"\nAPROBADO"<<endl;
    else
        cout<<"\nREPROBADO"<<endl;;
    cout<<"dese agregar otro estudiante (s/n)"<<endl;
    cin>>op;

    }
    while(op=="s" or op=="S");

    system("pause");


}
