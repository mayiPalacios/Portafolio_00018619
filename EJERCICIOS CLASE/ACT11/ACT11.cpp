  
#include <iostream>
#define MAX 5
using namespace std;
template <class T>
class colacir
{
private:
T arreglo[MAX];
int frente, final;
public:
colacir ();
int colacirllena ();
int colacirvacia ();
void operator + (T elem);
void operator - (T *elem);
void imprimecolacir ();
};
template <class T>
colacir<T>::colacir ()
{
frente = -1;
final = -1;
}
template <class T>
int colacir<T>::colacirllena ()
{
if ((frente == 0 && final == MAX-1) || ((final+1) == frente))
return 1;
return 0;
}
template <class T>
int colacir<T>::colacirvacia ()
{
if (frente == -1 && final == -1)
return 1;
return 0;
}
template <class T>
void colacir<T>::operator + (T elem)
{
if (frente == -1)
frente = 0;
final = (final + 1)%MAX;
arreglo[final] = elem;
}
template <class T>
void colacir<T>::operator - (T *elem)
{
*elem = arreglo[frente];
if (frente == final)
{
frente = -1;
final = -1;
}
else
frente = (frente+1)%MAX;
}

template <class T>
void colacir<T>::imprimecolacir ()
{
int x;
if (frente < final)
{
cout <<frente<<endl;
cout <<final<<endl;
for (x=frente; x<=final; x++)
cout <<arreglo[x]<<" ";
}
else
{
if (final != -1)
{
cout <<"entro al else"<<endl;
cout <<frente<<endl;
cout <<final<<endl;
for (x=1; x<final; x++)
cout <<arreglo[x]<<" ";
for (x=frente; x<MAX; x++)
cout <<arreglo[x]<<" ";
}
}
}
int main ()
{
colacir<int> objcolacir;
int dato, x;
while (objcolacir.colacirllena () == 0)
{
cout <<"Dame un valor"<<endl;
cin >>dato;
objcolacir + dato;
}
objcolacir.imprimecolacir ();
int elem;
while (objcolacir.colacirvacia () == 0)
{
objcolacir - &elem;
cout <<elem<<endl;
}
cout <<"despues de vaciar"<<endl;
objcolacir.imprimecolacir ();
}
