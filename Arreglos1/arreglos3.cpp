#include <iostream>
#include <conio.h>


using namespace std;
	int main (){
	
	
	int numero [100];
	int num,total;
	
	cout<<"Digita el numero de datos"<<endl;
	
	cin>>num;
	
	for (int i=0; i<num; i++){
		cout<<"Esrbiba los Numeros"<<endl;
		cin>>numero[i];
		
	}
		for (int i=0; i<num; i++){
	total=numero[i]*(numero[i]*numero[i]);
		
	}
		cout <<"El total de la multiplicacion es :"<<total;
	getch();
	return 0;
	
	
	
}
