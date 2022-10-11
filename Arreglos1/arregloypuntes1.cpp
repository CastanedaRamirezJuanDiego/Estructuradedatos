#include<iostream> 
 #include<conio.h>
  #include<stdio.h>
 using namespace std;
 
 int main(){
 
 int valores[100];
 int num;
 int suma=0;
 cout<<"Digite la cantidad de numeros: ";
 cin>>num;
 
 for(int i=0; i<num; i++){
 cout<<"\nDigite un nmero: ";
 cin>>valores[i];
 } 
 for(int i=0; i<num; i++){
 cout<<i<<"-->"<<valores[i]<<endl;
suma=suma+valores[i];
 
 }
 
if(suma%2==0){
	cout<<"el numero es par"<<suma;
}else {
	
	cout<<"El numero es impar"<<suma;
}
 
 	
	getch();
	return 0;
	
}

