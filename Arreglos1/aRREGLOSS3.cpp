#include<iostream> 
 #include<conio.h>
  #include<stdio.h>
 using namespace std;
 
 int main(){
 
 int valores[100];
 int num;
 int total=1;
 cout<<"Digite el tamaño ;"<<endl;
 cin>>num;
 
 for(int i=0; i<num; i++){
 cout<<"Digite el numero: "<<endl;
 cin>>valores[i];
 } 
 for(int i=0; i<num; i++){
 cout<<i<<"-->"<<valores[i]<<endl;
total=total*valores[i];
 
 }
 
 cout << "Su suma es: " << suma<<endl;
 }

