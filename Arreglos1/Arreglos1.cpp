#include <iostream>
#include <conio.h>


using namespace std;
	int main (){
	int total=1;
	
	int numeros []={1,2,3,4,5,6,7,8};
	
	for (int i=0; i<8; i++)
	{total=total*numeros[i];
	}
	cout <<"El total de la multiplicacion es :"<<total;
	
	
	getch();
	return 0;
	
}



