#include <iostream>
using namespace std;

 struct complejo{
    int real;
    int imaginario;
};

void resta(complejo a, complejo b){
    cout << "Resultado: " << a.real - b.real << "+" << a.imaginario - b.imaginario << "j";
}

int main(){
    complejo x;
    complejo y;
    
    cout << "Introduzca los numeros complejos: " << endl;
    
    cout << "Introduzca la parte real del complejo a ";
    cin >> x.real;
    
    cout << "Introduzca la parte imaginaria del complejo a ";
    cin >> x.imaginario;
    
    cout << "Introduzca la parte real del complejo b ";
    cin >> y.real;
    
    cout << "Introduzca la parte imaginaria del complejo b ";
    cin >> y.imaginario;
    
    resta(x, y);


    
    
    return 0;
}
