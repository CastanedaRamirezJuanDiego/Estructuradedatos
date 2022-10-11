#include<iostream> 
#include<conio.h>
#include<stdio.h>
 using namespace std;
 
 int main(){
 
 	 int numeros[100][100];
	 int fila;
	 int columna;
	 int sum=0;
	 
	 
	 cout<<"Numero de filas : "<<endl
	 ;
	 cin>>fila;
	 cout<<"Numero de columnas: "<<endl;
	 cin>>columna;
	 

	 for(int i=0; i<=fila; i++){
	 	for(int j=0; j<=columna; j++){
	 		cout<<"digita un numero ["<<i<<"]["<<j<<"]:  ";
	 		cin>>numeros[i][j];
	 		
		 }
	 	
	 }
	cout<<"\n Mostrar el contenido";
	
	for(int i=0; i<=fila; i++){
			 	
	 	for(int j=0; j<=columna; j++){
	 		cout<<numeros [i][j];
	 		sum=sum+numeros[i][j];
	 	
		 }
	 	cout<<"\n";
	 }


cout<<"la suma de las filas es:  "<<sum;		
	getch();
	return 0;

 }
