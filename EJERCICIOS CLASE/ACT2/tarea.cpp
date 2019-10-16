  
#include <iostream>
using namespace std;
float mediana(int *,int tamano);
int main()
{int tamano;
cout<<"tamaño de arreglo: "; cin>>tamano;
   int arr[tamano];
   for(int i=0;i<tamano;i++)
   {
    cout << "Introduce elemento " << i+1<<"que desee: ";
    cin >> arr[i];
   }
   cout << "Media: " << mediana(arr,tamano) << endl;
   system("pause");
   return 0;
}

float mediana(int *p,int tamano) 
{
 float media=0;
 
 for(int i=0;i<tamano;i++)
 {
     media = media + *p;
     p++; 
 }
 return media/tamano;
}
