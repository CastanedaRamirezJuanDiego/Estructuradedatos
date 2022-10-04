#include <iostream>

using namespace std;

int main()
{
  int nacimiento, actual, edad;

  for(int i=0; i<=9; i++){
  cout<<"Ingresa el año de nacimiento" <<endl;
  cin>>nacimiento;

  cout<<"Ingresa el año actual" <<endl;
  cin>>actual;

   if(nacimiento >= actual){
    cout<<"El año de nacimiento no puede ser mayor o igual que el año actual" <<endl <<endl;
   }else{
     edad = actual - nacimiento;
     cout<<"Tu edad es de" <<" " <<edad <<" " <<"Años" <<endl 
   <<endl;
   }
  }
 }

