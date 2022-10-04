#include <iostream>

using namespace std;

int main()
{
   int numero=80;
 
   
 
    for( int i = 1; i <= numero; i++ ) {
        if( i % 3 == 0 && i % 1 != 1 )
            cout << i << " ";
    }
    cout << endl;
 
    return 0;
}
