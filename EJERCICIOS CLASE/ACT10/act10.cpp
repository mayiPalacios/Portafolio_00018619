inicializamos pila 
introducimos la expresion (lista)
llamada ma

while(!pila  diferente de vacia){
	if(ma==numero ){
		
		insertamos final de la lista
		lista->dato=ma;
	}
	if(ma==parentesis izquierdo){
		ma insertar pila;
	}
	if(ma==parentesis derecho){
		ma insertar al final de la lista;
	}
	if(ma==operador){
		extraer elemento de pila (pop)
		insertarlo al finl de la lista
	}
	
	destruir pila;
	return 0;
}
