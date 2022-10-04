#include <iostream>

using namespace std;

int main()
{
  
   int num[10];
   int i,j=1,p,r;
   printf("Introduce un número:   ");
   for(i=0;(num[i]=getchar()) != '\n';i++);
 
   if(i>6&&i<=9) p=6;
      else if(i>3&&i<=6){ p=3; j++; }
	 else if(i>0&&i<=3){ p=0; j+=2; }
for(j=j;j<=3;j++)
{
  if((i==3 || i==6)||(num[0]!=' ' || num[3]!=' ' || num[6]!=' ') )
      switch(num[i-(3+p)])
      {
	 case'1':if((num[(i-(3+p))+1]!='0') || (num[(i-(3+p))+2]!='0'))
		     printf("ciento ");
		 else
		     printf("cien ");
		 break;
	 case'2':printf("Doscientos ");break;
	 case'3':printf("Trescientos ");break;
	 case'4':printf("Cuatrocientos ");break;
	 case'5':printf("Quinientos ");break;
	 case'6':printf("Seiscientos ");break;
	 case'7':printf("Setecientos ");break;
	 case'8':printf("Ochocientos ");break;
	 case'9':printf("Novecientos ");break;
      }
 
      switch(num[i-(p+2)])
      {
	 case'1':switch(num[(i-(p+2))+1])
		 {
		    case'0':printf("Diez ");break;
		    case'1':printf("Once ");break;
		    case'2':printf("Doce ");break;
		    case'3':printf("Trece ");break;
		    case'4':printf("Catorce ");break;
		    case'5':printf("Quince ");break;
		    case'6':printf("Diesciseis ");break;
		    case'7':printf("Diescisiete ");break;
		    case'8':printf("Diesciocho ");break;
		    case'9':printf("Diescinueve ");break;
		 }break;
	 case'2':if(num[(i-(p+2))+1]=='0')   printf("veinte ");
		 else   printf("veinti");   break;
	 case'3':printf("Treinta "); if(num[(i-1)-p]!='0') printf("y "); break;
	 case'4':printf("Cuarenta "); if(num[(i-1)-p]!='0') printf("y "); break;
	 case'5':printf("Cincuenta "); if(num[(i-1)-p]!='0') printf("y "); break;
	 case'6':printf("Secenta "); if(num[(i-1)-p]!='0') printf("y "); break;
	 case'7':printf("Setenta "); if(num[(i-1)-p]!='0') printf("y "); break;
	 case'8':printf("Ochenta "); if(num[(i-1)-p]!='0') printf("y "); break;
	 case'9':printf("Noventa "); if(num[(i-1)-p]!='0') printf("y "); break;
      }
 
      if(num[i-(p+2)]!='1')
      switch(num[(i-1)-p])
      {
	 case'1':
        if(p>=3) printf(" ") ;
		else printf("Uno");
		break;
	 case'2':printf("Dos ");break;
	 case'3':printf("Tres ");break;
	 case'4':printf("Cuatro ");break;
	 case'5':printf("Cinco ");break;
	 case'6':printf("Seis ");break;
	 case'7':printf("Siete ");break;
	 case'8':printf("Ocho ");break;
	 case'9':printf("Nueve ");break;
      }
    if(p==6 && num[0]=='0' && p==6 && num[1]=='0' && p==6 && num[2]=='0');
       else if(p==6 && num[0]=='1' && i==7) printf("Millon ");
	  else if(p==6) printf("Millones ");
      if(p==3 && num[p]!=' '|| p==3 && num[p+1]!='0' || p==3 && num[p+2]!='0')printf("mil ");
      p-=3;
}
   getchar();
   return 0;
}

