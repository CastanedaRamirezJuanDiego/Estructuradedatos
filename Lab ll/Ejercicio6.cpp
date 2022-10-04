#include<iostream>
using namespace std;

int main(){
	int num1, num2, suma, num;
while (num !=2){
	cout<<"Que desea hacer"<<endl<<"1.- Suma"<<endl<<"2.-Salir"<<endl;
	cin>>num;
	switch(num){
		
		case 1: 
		cout<<"Ingrese el primer valor: ";
		cin>>num1;
		cout<<"Ingrese el segundo valor: ";
		cin>>num2;
		suma=num1+num2;
		cout<<"El resultado de la suma es: "<<suma<<endl;
		system("pause");
		break;
		case 2: 
		system("pause");
		break;
		default:
		cout<<"No se reconoce la opcion"<<endl;
		system("pause");
		break;
			
		
	}
}
return 0;
}




