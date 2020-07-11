#include <iostream>

using namespace std;

struct Alumnos {
	string nombre;
	int edad;
	string materia;
};

int main (){
	
	Alumnos alumno1;
		alumno1.nombre = "Juan Carlos";
			alumno1.edad = 23;
				alumno1.materia = "Calculo Diferencial";
	
	Alumnos alumno2;
		alumno2.nombre = "Diego Fernando";
			alumno2.edad = 22;
				alumno2.materia = "Programacion 1";
	
	Alumnos alumno3;
		alumno3.nombre = "Handry del Carmen";
			alumno3.edad = 19;
				alumno3.materia = "Algebra";
	
	Alumnos alumno4;
		alumno4.nombre = "Jesus Eduardo";
			alumno4.edad = 20;
				alumno4.materia = "Sistemas Operativos";

	Alumnos alumno5;
		alumno5.nombre = "Julio Cesar";
			alumno5.edad = 24;
				alumno5.materia = "Estructura de datos";
		
	cout<<"Nombre: "<<alumno1.nombre<<endl<<"Edad: "<<alumno1.edad<<endl<<"Materia: "<<alumno1.materia<<endl;
	cout<<"--------------------------------"<<endl;
	cout<<"Nombre: "<<alumno2.nombre<<endl<<"Edad: "<<alumno2.edad<<endl<<"Materia: "<<alumno2.materia<<endl;
	cout<<"--------------------------------"<<endl;
	cout<<"Nombre: "<<alumno3.nombre<<endl<<"Edad: "<<alumno3.edad<<endl<<"Materia: "<<alumno3.materia<<endl;
	cout<<"--------------------------------"<<endl;	
	cout<<"Nombre: "<<alumno4.nombre<<endl<<"Edad: "<<alumno4.edad<<endl<<"Materia: "<<alumno4.materia<<endl;
	cout<<"--------------------------------"<<endl;
	cout<<"Nombre: "<<alumno5.nombre<<endl<<"Edad: "<<alumno5.edad<<endl<<"Materia: "<<alumno5.materia<<endl;
}
