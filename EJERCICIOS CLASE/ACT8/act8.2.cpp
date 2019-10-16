#include <iostream>
using namespace std;

struct Tpila{
    float elements[100];
    int top;
};
typedef struct Tpila Pila;
//typedef struct Tpila Pilasecundaria;

void initialize(Pila *s){
    s->top = -1;
}

bool empty(Pila *s){
    return s->top < 0;
}

void push(Pila *s, float e){
    if(s->top < 99){
        (s->top)++;
        s->elements[s->top] = e;
    }
}

float pop(Pila *s, float *e){
    if(s->top >= 0){
        *e = s->elements[s->top];
        (s->top)--;
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
	
	pop(&unaPila, &num );

	push(&secundaria, num);
	}
 cout<<"ultimo elemento :"<< num<<endl;
 
 	cout<<"imprimir pila intacta: "<<endl;
 	
 while(!empty(&secundaria)){
	
	pop(&secundaria, &num );

	push(&unaPila, num);
	cout<<num<<endl;

	}
    
    
}
