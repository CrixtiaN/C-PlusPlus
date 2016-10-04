#include <iostream>
using namespace std;
int main(){
	int i;
	float n1, np1, n2, np2, n3, np3, n4, np4, n5, np5, df, ps=0;
	cout<<"Calculo de Notas."<<endl<<endl;
	for(i=1;i<=10;i++){
		cout<<"Nota del estudiante "<<i<<":"<<endl;
		cout<<"Introduzca la primer nota: ";
		cin>>n1;
		cout<<"Introduzca la segunda nota: ";
		cin>>n2;
		cout<<"Introduzca la tercera nota: ";
		cin>>n3;
		cout<<"Introduzca la cuarta nota: ";
		cin>>n4;
		cout<<"Introduzca la quinta nota: ";
		cin>>n5;
		if((n1>=0 && n1<=20)&&(n2>=0 && n2<=20)&&(n3>=0 && n3<=20)&&(n4>=0 && n4<=20)&&(n5>=0 && n5<=20)){
			np1=n1*0.15;
			np2=n2*0.20;
			np3=n3*0.25;
			np4=n4*0.15;
			np5=n5*0.25;
			df=np1+np2+np3+np4+np5;
			cout<<"La nota definitiva del estudiante es: "<<df;
			if(df>=10){
				cout<<" - El estudiante Aprobo!"<<endl<<endl;
			}
			else{
				cout<<" - El estudiante Reprobo!"<<endl<<endl;
			}
			ps+=df;
		}
		else{
			cout<<endl<<"ERROR: Usted introdujo una nota invalida, por favor vuelva a introducir las notas del estudiante "<<i<<"!"<<endl<<endl;
			i--;
		}
	}
	cout<<"El promedio del salon es: "<<ps/(i-1);
}
