#include <iostream>
using namespace std;

//------ Creacion de nodo y de arbol ------
struct nodo{
    int info;
    struct nodo *izq;
    struct nodo *der;
};
typedef struct nodo Nodo;
typedef struct nodo *Arbol;

Arbol crearArbol(int x){
    Arbol p = new Nodo;
    p->info = x;
    p->izq = NULL;
    p->der = NULL;
    return p;
}

//------ Agregar nodos a un arbol ------
void asignarIzq(Arbol a, int unDato){
    if(a == NULL)
        cout << "Error: arbol vacio" << endl;
    else if(a->izq != NULL)
        cout << "Error: subarbol IZQ ya existe" << endl;
    else
        a->izq = crearArbol(unDato);
}

void asignarDer(Arbol a, int unDato){
    if(a == NULL)
        cout << "Error: arbol vacio" << endl;
    else if(a->der != NULL)
        cout << "Error: subarbol DER ya existe" << endl;
    else
        a->der = crearArbol(unDato);
}

void agregarNodo(Arbol a){
    //solicitar informacion (numero a agregar)
    int numero = 0;
    cout << "Numero a agregar: ";
    cin >> numero;
   
    Arbol p = a;
   
    //desplazarse hasta el lugar adecuado
    while(true){
        if(numero == p->info){
            cout << "Error: " << numero << " ya existe" << endl;
            return;
        }
        else if(numero < p->info){//ir a la izquierda
            if(p->izq == NULL)
                break;
            else
                p = p->izq;
        }
        else{//ir a la derecha
            if(p->der == NULL)
                break;
            else
                p = p->der;
        }
    }
   
    //agregar el nuevo nodo
    if(numero < p->info)
        asignarIzq(p, numero);
    else
        asignarDer(p, numero);
}

//------ Recorrer un arbol (in, pre y post orden) ------
void preorden(Arbol a){
    if(a != NULL){
        cout << " " << a->info;
        preorden(a->izq);
        preorden(a->der);
    }
}
void inorden(Arbol a){
    if(a != NULL){
        inorden(a->izq);
        cout << " " << a->info;
        inorden(a->der);
    }
}
void postorden(Arbol a){
    if(a != NULL){
        postorden(a->izq);
        postorden(a->der);
        cout << " " << a->info;
    }
}

void recorrerArbol(Arbol a){
    cout << "Recorrido PRE orden:"; preorden(a); cout << endl;
    cout << "Recorrido IN orden:"; inorden(a); cout << endl;
    cout << "Recorrido POST orden:"; postorden(a); cout << endl;
}

int max(int a, int b){
    return ((a > b) ? a : b);
}

int contarNiveles(Arbol a){
    if(a == NULL){
        return 0;
    }
    int izq_h = contarNiveles(a->izq);
    int der_h = contarNiveles(a->der);
    return 1 + max(izq_h, der_h);
}

int contador_nodos = 0;
void contarNodos(Arbol a){
    if(a != NULL){
        contador_nodos++;
        contarNodos(a->izq);
        contarNodos(a->der);
    }
}

int sumatoria_nodos = 0;
int sumarNodos(Arbol a){
    if(a != NULL){
        sumatoria_nodos = sumatoria_nodos + a->info;
        sumarNodos(a->izq);
        sumarNodos(a->der);
    }
}

int main(){
    int variable = 0;
    cout<<"Inicializando arbol...\nValor contenido en la raiz: ";
    cin >> variable;
   
    Arbol arbol = crearArbol(variable);
   
    bool continuar = true;
    do{
        int opcion = 0;
        cout << "Menu: "
         << "\n\t1) Agregar"
         << "\n\t2) Recorrer"
         << "\n\t3) Cantidad de niveles"
         << "\n\t4) Cantidad de nodos"
         << "\n\t5) Suma de los nodos"
         << "\n\t6) Salir"
         << "\n\tOpcion elegida:";
        cin >> opcion;
        switch(opcion){
            case 1:
                agregarNodo(arbol);
            break;
           
            case 2:
                recorrerArbol(arbol);
            break;
           
            case 3:
                cout << contarNiveles(arbol) << " Niveles encontrados en el arbol." <<endl;
            break;
           
            case 4:
                contarNodos(arbol);
               cout << contador_nodos << " Nodos encontrados." << endl;
                contador_nodos = 0;
            break;
           
            case 5:
                sumarNodos(arbol);
                cout << "La sumatoria es igual a: " << sumatoria_nodos << endl;
                sumatoria_nodos = 0;
            break;
           
            case 6:
                continuar = false;
            break;
           
            default:
                cout << "Opcion erronea!" << endl;
            break;
        }
    }while(continuar);
   
    return 0;
}
