#include <iostream>
using namespace std;
int main(){
	//int n=0,r=0,i=1,sp=0,si=0;
	//cout<<"Introduzca el numero del que desea la tabla: ";
	//cin>>n;
	/*for(i=0;i<=10;i++)
	{
			r=i*n;
			cout<<n<<"x"<<i<<"="<<r<<endl;
	}*/
	/*while(i<=10)
	{
		r=i*n;
		cout<<n<<"x"<<i<<"="<<r<<endl;
		i++;
	}*/
	/*while(i<=100)
	{
		cout<<i<<endl;
		if((i%2)==0)
		{
			sp=sp+i;
		}
		else
		{
			si=si+i;	
		}
		i++;
	}
	cout<<"La suma de los numeros pares del 1 al 100 es: "<<sp<<endl;
	cout<<"La suma de los numeros impares del 1 al 100 es: "<<si<<endl;*/
	int i, j, esp, ast, n, p=1;
	do{
		cout<<"Introduzca un numero impar: ";
		cin>>n;
		if (n%2!=0)
		{
			esp=(n-1)/2;
			for(i=1;i<=n;i+=2)
			{
				for(j=esp;j>=1;j--)
				{
					cout<<" ";
				}
				esp--;
				
				for(ast=1;ast<=i;ast++)
				{
					cout<<"*";
				}
				cout<<endl;
			}
		}
		else
		{
			cout<<"Debe introducir un numero impar!"<<endl;
			cout<<"Si desea salir presione 0, si no presione 1?"<<endl;
			cin>>p;
		}
	}
	while(p==1);
}
