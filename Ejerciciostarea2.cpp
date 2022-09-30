#include <iostream>
#include <stdlib.h>


using namespace std;

int main (){
	
	int Chocolate, Cocacola, Panbimbo,Galletas, Chetos,cantidad;
	double iva=0.16,total;
	int option,precio;
	
	cout<<"Elije un producto"<<"\n1 Chocolate"<<"\n2 Cocacola"<<"\n3 Pambimbo"<<"\n4 Galletas"<<"\n5 Chetos"<<endl;
	cin>>option;
	switch (option){
case 1:
	cout<<"Precio de chocolates"<<endl;
	cin>>Chocolate;
	cout<<"Elija la cantidad de chocolates"<<endl;
	cin>>cantidad;
	total=Chocolate*cantidad;
	precio=total*iva;
    total=precio+total;
		cout<<"El total con iva incluido :"<<total;
	
		break;
case 2:
		cout<<"Precio de cocacola"<<endl;
	cin>>Cocacola;
	cout<<"Elija la cantidad de cocacolas"<<endl;
	cin>>cantidad;
	total=Cocacola*cantidad;
	precio=total*iva;
    total=precio+total;
		cout<<"El total con iva incluido :"<<total;
		break;
		
case 3:
		cout<<"Precio de Pambimbo"<<endl;
	cin>>Panbimbo;
	cout<<"Elija la cantidad de Pambimbo"<<endl;
	cin>>cantidad;
		total=Panbimbo*cantidad;
	precio=total*iva;
    total=precio+total;
		cout<<"El total con iva incluido :"<<total;
		break;
		
case 4:
		cout<<"Precio de Galletas"<<endl;
	cin>>Galletas;
	cout<<"Elija la cantidad de Galletas"<<endl;
	cin>>cantidad;
		total=Galletas*cantidad;
	precio=total*iva;
    total=precio+total;
		cout<<"El total con iva incluido :"<<total;
		break;
		
		
case 5:
		cout<<"Precio de Chetos"<<endl;
	cin>>Chetos;
	cout<<"Elija la cantidad de chetos"<<endl;
	cin>>cantidad;
		total=Chetos*cantidad;
	precio=total*iva;
    total=precio+total;
		cout<<"El total con iva incluido :"<<total;
	
		break;
			default:
			cout<<"No se encuentra el producto";
}
	
	
	return 0;	
}
