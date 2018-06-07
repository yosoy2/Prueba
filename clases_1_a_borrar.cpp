#include<stdio.h>
#include<conio.h>
#include<iostream>
#include<stdlib.h>

using namespace std;

class Prueba {
	
	    private:  // atributo del objeto 
		int atributo;
		string nombre;
		
		public:  // motodos atribuidos 
			Prueba(int,string);  //constructor
			void f1();
			void f2();
				
};

//constructor para inicializar la clase con los atributos
Prueba::Prueba(int _atributo,string _nombre) {
	
	atributo = _atributo;
	nombre = _nombre;
	
}

void Prueba::f1(){
	
	cout<<"es "<<nombre<<" y esto es una prueba"<<endl;
	
}

void Prueba::f2(){
	
	cout<<"es "<<nombre<<" y es la segunda prueba"<<endl;
}

int main(){
	Prueba p1 = Prueba (20,"galleta");
	Prueba p2 = Prueba (11,"otra galleta");
	Prueba p3 = Prueba (1828,"una ultima galleta");
	p1.f1();
	p2.f2();
	p3.f1();
	p3.f2();
	
	
	system ("pause");
	return 0; 
}
