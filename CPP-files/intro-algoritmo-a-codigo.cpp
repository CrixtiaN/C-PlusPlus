#include <iostream>
using namespace std;
int main(){
	
	//Declarar Variables;
	//Declarar n, i=1;
	
	int n, i=1;

	//---------------------------------------------------------
	//Escribir "Introduzca un numero";
	
	cout<<"Introduzca un numero: ";
	
	//---------------------------------------------------------
	//Leer n;
	
	cin>>n;
	
	//---------------------------------------------------------
	/*
	Si (n>0) entonces
		Escribir "El numero es positivo"
	De lo contrario Si (n<0)
		Escribir "El numero es negativo"
	De lo contrario
		Escribir "El numero es cero"	
	*/
	
	if (n>0) {
		cout<<"El numero es positivo!"<<endl;
	}
	else if (n<0) {
		cout<<"El numero es negativo!"<<endl;
	}
	else{
		cout<<"El numero es cero!"<<endl;
	}
	cout<<endl;
	
	//---------------------------------------------------------
	//Repita Para (i=1;i<=10;i+1)
		//Escribir "Repeticion ",i;
		
	for (i=1;i<=10;i++) {
		cout<<"Repeticion de Repita Para "<<i<<endl;
	}
	cout<<endl;
	
	//---------------------------------------------------------
	//Repita Mientras (i<=10)
	i=1;
	while (i<=10) {
		cout<<"Repeticion de Repita Mientras "<<i<<endl;
		i++;
	}
	cout<<endl;
	
	//---------------------------------------------------------
	//Repita Hasta (i<=10)
	i=1;
	do{
		cout<<"Repeticion de Repita Hasta "<<i<<endl;
		i++;	
	}
	while (i<=10);
	cout<<endl;
	
	//---------------------------------------------------------
	
}
