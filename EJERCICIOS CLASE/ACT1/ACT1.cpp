#include using namespace std;

void calculos(int num, int *doble, int *triple){ doble=2num; triple=3num;

cout<<"contenido de puntero doble :  "<< *doble <<endl;
cout<<"contenido de puntero triple : "<< *triple <<endl;


cout<<"direccion de variable num :  "<< &num <<endl;
cout<<"direccion de puntero doble :  "<< &doble <<endl;
cout<<"direccion de puntero triple : "<< &triple <<endl;
} int main(){

int numero=2, doble=0, triple=0;

calculos(numero, &doble, &triple);

cout<<"el doble de 2 es "<< doble <<endl; cout<<"el triple de 2 es "<< triple <<endl;

cout<<"direccion de variable numero : "<< &numero <<endl; cout<<"direccion de variable doble : "<< &doble <<endl; cout<<"direccion de variable triple : "<< &triple <<endl;

return 0; }
