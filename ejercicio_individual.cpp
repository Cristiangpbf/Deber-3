#include <iostream>
using namespace std;

int main(){
	int c;
	float sI,sF;
	
	cout<<"Ingrese el sueldo inicial: "<<endl;
	cin>>sI;
	cout<<"Ingrese la categoria a la que pertenece el empleado; "<<endl;
	cin>>c;	
	
		if(c==1){
			sF = sI + (sI * 0.15);
		}else if(c==2){
			sF = sI + (sI * 0.1);
		}else if(c==3){
			sF = sI + (sI * 0.08);
		}else if(c==4){
			sF = sI + (sI * 0.07);
		}else{
			cout<<"\tOPCION NO VALIDA "<<endl;
		}
	
	cout<<"El sueldo inicial era de: " <<sI<<endl;
	cout<<"La categoría del empleado es: "<<c<<endl;
	cout<<"El sueldo final es de: "<<sF<<endl;

}
