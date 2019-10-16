// Example program
//Construir una función recursiva que imprima la lista de números naturales
//comprendidos entre dos valores a y b dados por el usuario.
#include <iostream>
#include <string>
#include<math.h>
using namespace std;


float recur(float a,int k,int c  ){
    if(k==c){
        
  return a;
 } 
 if(k<c){
       a=4*((pow(-1,k))/(2*k+1));
     return recur(a,k+1,c);    
}
}

int main()
{int c;
 cout<<"ingrese el final"<<endl;
 cin>>c;
 cout<<"valor cercano: "<<recur(0,0,c);
  return 0;
}

