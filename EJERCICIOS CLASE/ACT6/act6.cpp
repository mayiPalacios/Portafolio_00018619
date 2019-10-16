#include <iostream>

using namespace std;

int arreglo[]={1, 3, 4, 5, 17, 18, 31, 33};

int buscar(int x, int low, int high);

int main(){
	int low=0;
	int high=8-1;
	int x;
	int i=0;
	cout<<"ingrese un numero a buscar: ";
	cin>>x;
	
	i=buscar(x, low, high);
	
	if(i==-1){
		cout<<"El elemento no se encontro: "<<endl;
	}
	else {
		cout<<"El elemento se encuentra en la casilla: "<<i<<endl;
		cout<<"el elemento es: "<< arreglo[i];
	}
}

buscar(int x, int low,int high){
int mid;
	
if(low > high)
    return(-1);
    
mid = (low + high) / 2;
if(x == arreglo[mid])
    return(mid);
if(x < arreglo[mid])
  	buscar(x, low, (mid-1));
else
    buscar(x, mid+1, high);
    
}
