#include <iostream>
#include <stdlib.h>


using namespace std;

int main (){
	int option;
	float num1,num2,num3,num4,result;
	
	
	cout<<"Que decea realizar "<<"\n 1:Suma"<<"\n 2:Multiplicacion"<<"\n 3:Media"<<endl;
	cin>>option;
	
	switch (option){
case 1:
		cout<<"Suma"<<endl;
		cout<<"Ingresa el primer nuemero"<<endl;
		cin>>num1;
		cout<<"Ingresa el segundo numero"<<endl;
			cin>>num2;
		cout<<"Ingresa el tercer numero"<<endl;
			cin>>num3;
		cout<<"Ingresa el cuarto numero"<<endl;
			cin>>num4;
		result=num1+num2+num3+num4;
		cout<<"El resultado de la suma es :"<<result<<endl;
	break;
case 2:
			cout<<"Multiplicacion"<<endl;
			cout<<"Ingresa el primer nuemero"<<endl;
		cin>>num1;
		cout<<"Ingresa el segundo numero"<<endl;
			cin>>num2;
		cout<<"Ingresa el tercer numero"<<endl;
			cin>>num3;
		cout<<"Ingresa el cuarto numero"<<endl;
			cin>>num4;
				result=num1*num2*num3*num4;
				cout<<"El resultado de la Multiplicacion es :"<<result<<endl;
	
	break;
case 3:
			cout<<"Media"<<endl;
						cout<<"Ingresa el primer nuemero"<<endl;
		cin>>num1;
		cout<<"Ingresa el segundo numero"<<endl;
			cin>>num2;
		cout<<"Ingresa el tercer numero"<<endl;
			cin>>num3;
		cout<<"Ingresa el cuarto numero"<<endl;
			cin>>num4;
				result=(num1+num2+num3+num4)/4;
				cout<<"El resultado de la Media es :"<<result<<endl;
			
			break;
			default:
				cout<<"Esta opcion no se encuentra";
}
	
	
	
	
	
	
	
	
	
	
	
return 0;	
}
