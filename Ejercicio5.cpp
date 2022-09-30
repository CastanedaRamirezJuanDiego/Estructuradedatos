#include <iostream>
using namespace std;
int main()
{
	
	
int edad;

cout<<"Ingresa la edad"<<endl;
cin>>edad;


if (edad <= 17) {
  cout << "No entra en el rango de edad";
} else if (edad <= 30) {
  cout << "fecha de vacunacion: 29-30 de septiembre";
} else if (edad  <= 39) {
  cout << "fecha de vacunacion: 8-9 de octubre";
  } else if (edad  <= 49) {
 cout << "fecha de vacunacion: 14-15 de octubre";
} else {
  cout << "la edad no entra en el rango";
}


}
