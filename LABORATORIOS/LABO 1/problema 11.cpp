#include<iostream>
#include<string>
#include<conio.h>
#include<math.h>
int i=0;
using namespace std;
int may(int x[],int acum,int i,int final ){


if(i==final){
return acum;


}
if(acum<x[i]){
acum=x[i];


}
return may(x,acum,i+1,final);
}
int main(){
int n;
cout<<"ingrese espacio de arreglo";
cin>>n;
int arre[n];
for (int i=0;i<n;i++){
cout<<"Ingrese: "<<endl;
cin>>arre[i];
}
int valor=may(arre,0,i,n);
cout<<valor;

return 0;
}
