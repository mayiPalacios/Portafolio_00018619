#include<iostream>
#include<vector>
using namespace std;
void menu();
struct orden{
	int revueltas;
	int frijolqueso;
	int queso;
	bool arroz;
};

typedef orden pupusas;
pupusas p;
pupusas listaorden(){
	pupusas p;
	cout<<"revueltas:  "; cin>>p.revueltas;
	cout<<"frijol con queso: "; cin>>p.frijolqueso;
	cout<<"queso: "; cin>>p.queso;
	
	return p;
}

void mostrarorden(pupusas p){
	
	cout<<"revueltas:  "<<p.revueltas<<endl;
	cout<<"frijol con queso: "<<p.frijolqueso<<endl;
	cout<<"queso: "<<p.queso;
	
}
vector<orden>lista;
void agregarorden(){
	pupusas p=listaorden();
	bool continuar= true;
	do{
		int op=0;
		cout << "\t1) Al principio\n\t2) Al final"
            << "\n\tOpcion elegida: ";
            cin>>op;
            switch(op){
            	case 1: lista.insert(lista.begin(),p);
            	continuar=false;
            	break;
            	case 2: lista.push_back(p);
            	continuar=false; break;
            	default: 
            	cout<<"error!";
            	break;
			}
	}while(continuar);
}
void mostrarlista(){
	for(int i=0;i<lista.size();i++){
		mostrarorden(lista[i]);
	}
}



int main(){
	cout<<"inicializando..."<<endl;
	bool continuar=true;
	do{
		int opcion=0;
		menu();
		cin>>opcion;
		switch(opcion){
			case 1: cout<<"agregando...";
			agregarorden();
			break;
			case 2: 
			cout<<"listando "<<endl;
		mostrarlista();
			break;
			case 3: continuar= false;
			break;
			default: cout<<"opcion erronea ";
			break;
			
			
		}
		
		
		
		
	}while(continuar);
	
	
	
	return 0;
}

void menu(){
	cout<<"menu"<<endl;
	cout<<"1.agregar elemento "<<endl;
	cout<<"2.ver elementos "<<endl;
	cout<<"3.salir\n\t opcion elegida: ";
}
