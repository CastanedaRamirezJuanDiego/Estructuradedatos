#include <iostream>

using namespace std;

int main()
{
  int nacimiento, actual, edad;

  for(int i=0; i<=9; i++){
  cout<<"Ingresa el a�o de nacimiento" <<endl;
  cin>>nacimiento;

  cout<<"Ingresa el a�o actual" <<endl;
  cin>>actual;

   if(nacimiento >= actual){
    cout<<"El a�o de nacimiento no puede ser mayor o igual que el a�o actual" <<endl <<endl;
   }else{
     edad = actual - nacimiento;
     cout<<"Tu edad es de" <<" " <<edad <<" " <<"A�os" <<endl 
   <<endl;
   }
  }
 }

