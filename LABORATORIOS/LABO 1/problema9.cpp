// Example program
#include <iostream>
#include <string>
#include<math.h>
using namespace std;
int recursion(int x,int n); 
int suma=0;

int main()
{

int x,n;
cout<<"ingrese el valor de x"<<endl;
cin>>x;

cout<<"ingrese el valor de n"<<endl;
cin>>n;
if(n>=0)

cout<<"el valor de la recursion es: "<<recursion(x,n)<<endl;




  
}
int acum=0;
int recursion(int x,int n){
    
if(acum==n+1){
    return suma;
    
}
    else{
    suma=suma+pow(x,acum);
    acum+=1;
    recursion(x,n);
        
    }
}
  
