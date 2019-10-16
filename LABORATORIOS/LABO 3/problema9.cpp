#include<iostream>
#include<time.h>
#include<string>
using namespace std;

struct personas{
	string nombre;
	string apellido;
	int edad;
	long numtelefono;
	string correo;
	personas *sig;
	long carnet;
};
void eliminar(personas* p,string name);
void imprimir(personas* p);
void menu();
int main(){
	int opcion;
	string name;
		 string name2,apellido;
	
	personas *inicio=NULL;
	personas *nodo=NULL;
	while (1){
		menu();
		cin>>opcion;
	if (opcion==0){
		break;
	}
	switch(opcion){
		case 1: 
			nodo=new personas;
			cout<<"ingrese nombres";
			cin.ignore();
			getline(cin,nodo->nombre);
			cout<<endl;
			cout<<"un apellido";
			cout<<endl;
			cin>>nodo->apellido;
			cout<<endl;
			cout<<"edad";
			cin>>nodo->edad;
			cout<<"ingrese numero de carnet: ";
			cin>>nodo->carnet;
			cout<<"numero telefono";
			cin>>nodo->numtelefono;
			cout<<"correo";
			cin>>nodo->correo;
			nodo->sig=inicio;
			inicio=nodo;
			break;
			case 2:
			cout<<"ingresar el nombre de la persona que quiere eliminar";
			cin>>name;
			eliminar(inicio,name);
			break;
			case 3:
			 cout<<"ingrese el nombre de la persona ";
			 cin>>name2;
			 cout<<endl;
			 cout<<"ingrese apellido";
			 cin>>apellido;
			 
			 if(name2==inicio->nombre && apellido==inicio->apellido){
			 	cout<<"ingrese nuevo numero de telefono";
			 	cin>>nodo->numtelefono;
			 	cout<<endl;
			 	cout<<"ingrese nuevo correo electronico";
			 	cin>>nodo->correo;
			 	cout<<"ingrese nuevo carnet: ";
			 	cin>>nodo->carnet;
			 }
			 
			break;
			case 4:
				cout<<"datos: "<<endl;
				imprimir(inicio);
				
			}
		}
			
			
			
			
			 
			
	
	return 0;
}
void eliminar(personas* p,string name){
	if(name==p->nombre){
		delete (p);
		cout<<"se a eliminado el dato";
	}
	
	
	
}
void imprimir(personas* p){
if(p==NULL){
	cout<<"no hay datos en la pila";
}
	cout<<p->nombre<<endl<<p->apellido<<endl<<p->numtelefono<<endl<<p->carnet<<endl<<p->correo<<endl<<p->edad;
	p=p->sig;
}

void menu(){
	cout<<"1.llenar lista"<<endl;
	cout<<"2.eliminar persona"<<endl;
	cout<<"3.actualizar datos"<<endl;
	cout<<"4.mostrar todas las personas"<<endl;
	cout<<"0.salir";	
}
