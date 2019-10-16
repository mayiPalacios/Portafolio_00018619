#include<iostream>
#include<string>
using namespace std;

struct libros{
	char titulo[35];
	int numpaginas;
	libros *sig;
};
void buscar(libros* p,string name);
void menu();
int main(){
	int opcion;
	string nombre;
	libros *inicio=NULL;
	libros *nodo=NULL;
	
	while (1){
		menu();
		cin>>opcion;
	if (opcion==0){
		break;
	}
	switch(opcion){
		case 1: 
			nodo=new libros;
			cout<<"ingrese nombres";
			cin.ignore();
			cin>>nodo->titulo;
			cout<<endl;
			cout<<"cantidad de paginas";
			cout<<endl;
			cin>>nodo->numpaginas;
			nodo->sig=inicio;
			inicio=nodo;
			break;
			case 2:
				string name;
				cout<<"ingrese el nombre del libro";
				cin>>name;
				buscar(inicio,name);
		
			break;
			}
		}
			
