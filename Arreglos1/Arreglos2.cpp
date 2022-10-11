#include <iostream>
#include <conio.h>


using namespace std;
	int main (){
	
	
	char palabra [100];
	int num;
	
	cout<<"Digita el numero de letras"<<endl;
	
	cin>>num;
	
	for (int i=0; i<num; i++){
		cout<<"Deletre la palabra"<<endl;
		cin>>palabra[i];
		
	}
		for (int i=0; i<num; i++){
		cout<<i<<"->"<<palabra[i]<<endl;
		
	}
	
	getch();
	return 0;
	
	
	
}
