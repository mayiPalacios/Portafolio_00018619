#include <iostream>
using namespace std;



struct continente{
	string pais[5];
	string capital[5];
	int habitantes[5];
};

struct continente Europa;
struct continente America;
struct continente Africa;
struct continente Asia;
struct continente Oceania;

int main(){
		int europa=0;
		int america=0;
		int asia=0;
		int oceania=0;
		int africa=0;
		int poblacion=0;

	for(int j=0; j<5; j++){//continentes
	
		for(int i=0; i<5;i++){//paises
		switch(j){
			case 0: {
				cout<<"Ingrese el nombre de un pais del continente de Europa: ";
				cin>>Europa.pais[i];
				cout<<"Ingrese el nombre de la capital de ese pais: ";
				cin>>Europa.capital[i];
				cout<<"Ingrese el numero de habitantes: ";
				cin>>Europa.habitantes[i];
				
				break;
			}
			
			case 1: {
				cout<<"Ingrese el nombre de un pais del continente de America: ";
				cin>>America.pais[i];
				cout<<"Ingrese el nombre de la capital de ese pais: ";
				cin>>America.capital[i];
				cout<<"Ingrese el numero de habitantes: ";
				cin>>America.habitantes[i];
				
				break;
			}
			
			case 2: {
				cout<<"Ingrese el nombre de un pais del continente de Africa: ";
				cin>>Africa.pais[i];
				cout<<"Ingrese el nombre de la capital de ese pais: ";
				cin>>Africa.capital[i];
				cout<<"Ingrese el numero de habitantes: ";
				cin>>Africa.habitantes[i];
				
				break;
			}
			
			case 3: {
				cout<<"Ingrese el nombre de un pais del continente de Asia: ";
				cin>>Asia.pais[i];
				cout<<"Ingrese el nombre de la capital de ese pais: ";
				cin>>Asia.capital[i];
				cout<<"Ingrese el numero de habitantes: ";
				cin>>Asia.habitantes[i];
				
				break;
			}
			
			case 4: {
				cout<<"Ingrese el nombre de un pais del continente de Oceania: ";
				cin>>Oceania.pais[i];
				cout<<"Ingrese el nombre de la capital de ese pais: ";
				cin>>Oceania.capital[i];
				cout<<"Ingrese el numero de habitantes: ";
				cin>>Oceania.habitantes[i];
				
				break;
			}
		}
		
		
		
	}
	} //fin de forss
	
	
	for(int k=0;k<5;k++){
		europa+=Europa.habitantes[k];
		america+=America.habitantes[k];
		asia+=Asia.habitantes[k];
		africa+=Africa.habitantes[k];
		oceania+=Oceania.habitantes[k];
	}
	 poblacion=europa+america+asia+africa+oceania;
	 
	 string mayor_poblacion;
	 
	if(europa>africa && europa>america && europa>asia && europa>oceania) mayor_poblacion="Europa";
	else if(america>africa && america>europa && america>asia && america>oceania) mayor_poblacion="America";
	else if(asia>africa && asia>america && europa<asia && asia>oceania) mayor_poblacion="Asia";
	else if(africa>europa && africa>america && africa>asia && africa>oceania) mayor_poblacion="Africa";
	else   mayor_poblacion="Oceania";
	 
	 cout<<"La poblacion del continente de Europa es de :"<<europa <<endl;
	 cout<<"La poblacion del continente de America es de :"<<america<< endl;
	 cout<<"La poblacion del continente de Asia es de :"<<asia << endl;
	 cout<<"La poblacion del continente de Africa es de :"<<africa <<endl;
	 cout<<"La poblacion del continente de Oceania es de :"<<oceania << endl;
	 cout<<"La poblacion mundial es de :"<<poblacion <<endl;
	 cout<<"El continente con mayor poblacion es: "<<mayor_poblacion;
	 
	 
	 
}
