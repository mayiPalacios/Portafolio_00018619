#include <iostream>
#include <stack>

using namespace std;

struct nodo{
    float elements;
    struct nodo *siguiente;
};
typedef struct nodo *Pila;


void initialize(Pila *s){
    *s=NULL;
}

bool empty(Pila *s){
    return *s==NULL;
}

void push(Pila *s, float e){
  struct nodo *unNodo;
  unNodo=new struct nodo;
  unNodo->elements=e;
  unNodo->siguiente=*s;
  
  *s=unNodo;
  
  
  
}

float pop(Pila *s){
    if(!empty(s)){
       struct nodo *unNodo = *s;
       int e=(*s)->elements;
       *s=(*s)->siguiente;
       delete(unNodo);
       
       return e;
    }
    else{
    	cout<<" underflow"<<endl;
    	return -1;
	}
}

float top(Pila *s){
	if(!empty(s)){
		int e=(*s)->elements;
		return e;
	}
	else{
		cout<<"underflow"<<endl;
		return -1;
	}
}

int main() {
    Pila unaPila;
    Pila secundaria;
    initialize(&secundaria);
    initialize(&unaPila);
    float num=0;

	push(&unaPila, 12.5);
    push(&unaPila, 1.2);
    push(&unaPila, 3.4);
    push(&unaPila, 5.6);
    
while(!empty(&unaPila)){
	
	pop(&unaPila);

	push(&secundaria, num);
	}
 cout<<"ultimo elemento :"<< num<<endl;
 
 	cout<<"imprimir pila intacta: "<<endl;
 	
 while(!empty(&secundaria)){
	
	num=pop(&secundaria);

	push(&unaPila, num);
	
	cout<<num<<endl;

	}
    
    
}
