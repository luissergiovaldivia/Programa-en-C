#include <iostream>
using namespace std;
#include <string.h>
#include <conio.h>
#include <math.h>
#include <stdio>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
main() {
char cad[1]={' '};
int c=0,n=0,tam,i,num[1];
clrscr();
cout<<"Ingrese el numero: ";
cin>>cad;
tam=strlen(cad);
for(i=tam-1; i>=0; i--) {
if(cad[i]<10 && cad[i]>0)
n=n+cad[i]*pow(16,c);
else if(cad[i]=='a')  num[i]=10;
else if(cad[i]=='b') num[i]=11;
else if(cad[i]=='c') num[i]=12;
else if(cad[i]=='d') num[i]=13;
else if(cad[i]=='e') num[i]=14;
else if(cad[i]=='f') num[i]=15;
n=n+num[i]*pow(16,c);
c++; }
cout<<"El resultado es: "<<n<<endl;
getch();
return 0;
}



