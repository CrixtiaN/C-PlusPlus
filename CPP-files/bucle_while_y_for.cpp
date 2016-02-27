#include <iostream>
using namespace std;
int main(){
	int p=1;
	do
	{
		system("cls||clear");
		int n=2; //Declaracion de variable n y se le asigna un numero par
		while (n%2==0){ //Se verifica si el numero guardado en la variable n es par
			cout<<"Introduzca un numero: "; //Pedimos un numero
			cin>>n;	//El numero introducido se guarda en la varible n 
			//Se repite la verificacion para hacer el bucle
		}
		cout<<"El numero que usted escribio es: "<<n<<endl<<endl; //Si el numero fue impar se detiene el bucle y se muestra este mensaje con el valor de n
		
	
		int i=0; //Se declara la variable i asignandole a esta el valor 0
		cout<<"Introduzca un numero: "; //Se pide un numero
		cin>>n; //El numero introducido se guarda en la varible n
	
		cout<<endl;
		cout<<"Bucle While"<<endl<<endl;
		while(i<=n){ //Se condiciona el bucle para que se ejecute solo si el valor de n es menor o igual a i
			cout<<i<<" "; //Se muestra el valor de la variable i
			i++; //Al final de cada repeticion la variable i aumenta una unidad
		}
		
		cout<<endl<<endl;
		cout<<"Bucle For"<<endl<<endl;
		for(i=0;i<=n;i++){ //Se vuelve a asignar el valor 0 a i, Se condiciona el bucle para que se ejecute solo si el valor de n es menor o igual a i, Al final de cada repeticion la variable i aumenta una unidad 
			cout<<i<<" "; //Se muestra el valor de la variable i
			}
			
		cout<<endl<<endl;
		cout<<"Si desea repetir el programa escriba 1: ";
		cin>>p;
		/*int x;
	    for ( x = 0; x < 2; x++ ) 
	    {
	        printf("\n\n\n\n\n\n\n\n\n\n");
	    }*/
	}while(p==1);
}
