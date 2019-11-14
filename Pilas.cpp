#include<iostream>
#include<conio.h>
#include<stdlib.h>
using namespace std;

struct Nodo{
	int dato;
	Nodo *siguiente;
};


void agregarPila(Nodo *&,int); 
void sacarPila(Nodo *&,int &);

int main(){
	Nodo *pila = NULL;	
	int dato;
	char rpt;
cout<<"\t ***Programa para ingresar y mostrar numeros de una pila ***"<<endl;
	do{ 
		cout<<"Ingresa un numero: ";
		cin>>dato;
		agregarPila(pila,dato);
	
		cout<<"\nDesea agregar otro numero a pila? (s/n): ";
		cin>>rpt;
	}while((rpt == 's')||(rpt=='S'));
	
	
	cout<<"\nSe muestran los elementos de la pila: ";
	while(pila != NULL){
		sacarPila(pila,dato);
		
		if(pila != NULL){
			cout<<dato<<" , ";
		}
		else{
			cout<<dato<<".";
		}
	}
	
	getch();
	return 0;
}

void agregarPila(Nodo *&pila,int n){
	Nodo *nuevo_nodo = new Nodo();
	nuevo_nodo->dato = n;
	nuevo_nodo->siguiente = pila;
	pila = nuevo_nodo;
	
	cout<<"El numero "<<n<<" ha sido agregado correctamente";
}

void sacarPila(Nodo *&pila,int &n){
	Nodo *aux = pila;
	n = aux->dato;
	pila = aux->siguiente;
	delete aux;
}
