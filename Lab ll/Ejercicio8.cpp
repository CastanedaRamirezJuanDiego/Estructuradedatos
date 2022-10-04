#include<iostream>
using namespace std;

int main(){
	int num1, num2, mult, num;
while (num !=2){
	cout<<"Que desea hacer"<<endl<<"1.- Multiplicacion"<<endl<<"2.-Salir"<<endl;
	cin>>num;
	switch(num){
		
		case 1: 
		cout<<"Ingrese el primer valor: ";
		cin>>num1;
		cout<<"Ingrese el segundo valor: ";
		cin>>num2;
		mult=num1*num2;
		cout<<"El resultado de la multiplicacion es: "<<mult<<endl;
		system("pause");
		break;
		case 2: 
		cout<<"Multiplicaicion terminada"<<endl;
		system("pause");
		break;
		default:
		cout<<"La opcion ingresada no es correcta"<<endl;
		system("pause");
		break;
			
		
	}
}
return 0;
}
