#include <iostream>
#include <math.h>
using namespace std;
int main(){
	
	/*
	//Raices Reales
	float a,b,c,v;
	cout<<"Introduzca el valor del primer elemento: ";
	cin>>a;
	cout<<"Introduzca el valor del segundo elemento: ";
	cin>>b;
	cout<<"Introduzca el valor del tercero elemento: ";
	cin>>c;
	v = (b*b)-4*a*c;
	if(v<0){
		cout<<"La raiz no es real"<<endl;
	}
	else{
		cout<<"Las raices reales de la ecuacion de 2do grado son: "<<sqrt(v)<<" y "<<sqrt(v)*-1<<endl;
	}
	*/
	
	/*
	//Calculo de interes
	int m,i,c,cf;
	cout<<"Capital inicial: ";
	cin>>c;
	cout<<"Cantidad de meses: ";
	cin>>m;
	cout<<"Tasa de Interes: ";
	cin>>i;
	cf = (((c*i)/100)*m)+c;
	cout<<"El capital final generado es "<<cf;
	*/
	
	/*
	//Calculo de Bono Especial
	int he,ha;
	float tc;
	cout<<"Introduzca la cantidad de horas extras trabajadas del obrero: ";
	cin>>he;
	cout<<"Introduzca la cantidad de horas de ausencia del obrero: ";
	cin>>ha;
	//tc = (((he*6)-5)*ha)/6;
	tc = (he-0.83)*ha;
	//cout<<"Tasa de Calculo: "<<tc<<endl;
	if (tc>40){
		cout<<"El bono es de 5000 Bs";
	}
	if (tc>30 && tc<=40){
		cout<<"El bono es de 4000 Bs";
	}
	if (tc>20 && tc<=30){
		cout<<"El bono es de 3000 Bs";
	}
	if (tc>10 && tc<=20){
		cout<<"El bono es de 1000 Bs";
	}
	*/
	
	/*
	//Multiplo de 5
	int n;
	cout<<"Introduzca un numero: ";
	cin>>n;
	if (n%5==0){
		cout<<"El numero "<<n<<" es multiplo de 5";
	}
	else{
		cout<<"El numero "<<n<<" no es multiplo de 5";
	}
	*/
	
	/*
	//Par o impar
	int n;
	cout<<"Introduzca un numero: ";
	cin>>n;
	if (n%2==0){
		cout<<"El numero "<<n<<" es par";
	}
	else{
		cout<<"El numero "<<n<<" es impar";
	}
	*/
	
	/*
	//El mayor de 3 numeros
	int n1, n2, n3, m;
	cout<<"Introduzca el primer numero: ";
	cin>>n1;
	cout<<"Introduzca el segundo numero: ";
	cin>>n2;
	cout<<"Introduzca el tercer numero: ";
	cin>>n3;
	m=n1;
	if (m<n2){
		m=n2;
	}
	if (m<n3){
		m=n3;
	}
	cout<<"El numero mayor es: "<<m;
	*/
	
	/*
	//Cantidad de Positivos y Negativos
	int n, pos=0, neg=0;
	do{
		cout<<"Introduzca un numero: ";
		cin>>n;
		if (n>0){
			pos++;
		}
		else if(n<0){
			neg++;
		}
	}
	while (n!=0);
	cout<<"La cantidad de numeros positivos es: "<<pos<<endl;
	cout<<"La cantidad de numeros negativos es: "<<neg<<endl;
	*/
	
	/*
	//Cantidad de Pares e Impares de un total de 15 numeros
	int n,i, par=0, impar=0;
	for (i=1;i<=15;i++){
		cout<<"Introduzca un numero: ";
		cin>>n;
		if (n%2==0){
			par++;
		}
		else{
			impar++;
		}
	}
	cout<<"La cantidad de numeros pares es: "<<par<<endl;
	cout<<"La cantidad de numeros impares es: "<<impar<<endl;
	*/
	
	/*
	//7 primeras potencias de un numero leido
	int n,i;
	cout<<"Introduzca un numero: ";
	cin>>n;
	for (i=1;i<=7;i++)
	{
		cout<<"El numero "<<n<<" elevado a "<<i<<" es: "<<pow(n,i)<<endl;
	}
	*/
	
	/*
	//Consultorio Nutricional
	float ps, est, imc;
	int cimc=0, bp=0, nm=0, md=0, ob=0, p=0;
	do {
		cout<<"Introduzca el peso del paciente: ";
		cin>>ps;
		cout<<"Introduzca la estatura del paciente: ";
		cin>>est;
		imc = ps/(est*est);
		cimc++;
		cout<<"La cantidad de IMC calculados hasta ahora es: "<<cimc<<endl;
		if (imc<18.5){
			bp++;
			cout<<"El IMC es "<<imc<<" - Bajo Peso"<<endl;
		}
		else if (imc>=18.5 && imc <= 24.9){
			nm++;
			cout<<"El IMC es "<<imc<<" - Peso Normal"<<endl;
		}
		else if (imc>=25.0 && imc <= 29.9){
			md++;
			cout<<"El IMC es "<<imc<<" - Peso Moderado"<<endl;
		}
		else if (imc>=30.0){
			ob++;
			cout<<"El IMC es "<<imc<<" - Obeso"<<endl;
		}
		if(ob>10){
			cout<<"Existe un problema de salud publica por obesidad"<<endl;
		}
		cout<<"La clasificacion de todos los IMC calculados hasta ahora es la siguiente: "<<endl;
		cout<<endl;
		cout<<"Los IMC considerados como Bajo Peso: "<<bp<<endl;
		cout<<"Los IMC considerados como Peso Normal: "<<nm<<endl;
		cout<<"Los IMC considerados como Peso Moderado: "<<md<<endl;
		cout<<"Los IMC considerados como Obeso: "<<ob<<endl;
		cout<<endl;
		cout<<"Si desea introducir los valores de otro paciente introduzca el numero 1 de lo contrario introduzca el numero 0: ";
		cin>>p;
		cout<<endl;
	}
	while(p==1);
	*/
	
	//Proceso de 6 numeros
	/*
	int n, i, j, par=0, impar=0, n2, n4;
	for(i=1;i<=6;i++){
		cout<<"Introduzca un numero: ";
		cin>>n;
		if (n%2==0){
			par++;
		}
		else{
			impar++;
		}
		if (i==2){
			n2=n;
			//cout<<"La raiz cuadrada de "<<n<<" es: "<<sqrt(n)<<endl;
		}
		if (i==4){
			n4=n;
			//for (j=1;j<=3;j++)
			//	{
			//		cout<<"El numero "<<n<<" elevado a "<<j<<" es: "<<pow(n,j)<<endl;
			//	}
		}
	}
	cout<<endl;
	cout<<"La raiz cuadrada de "<<n2<<" es: "<<sqrt(n2)<<endl;
	for (j=1;j<=3;j++)
				{
					cout<<"El numero "<<n4<<" elevado a "<<j<<" es: "<<pow(n4,j)<<endl;
				}
	cout<<"La cantidad de numeros pares es: "<<par<<endl;
	cout<<"La cantidad de numeros impares es: "<<impar<<endl;
	*/
	
}
