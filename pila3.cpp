#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include "estruc.h"
using namespace std;

struct nodo{
	string nombre;
	float Cal1,Cal2,Cal3,Prom;    //declaracion de variables 
	
	nodo *siguiente;          //declaracion de la pila 
};


void agregar(nodo *&pila, string N, float C1, float C2, float C3, float P);
void eliminar(nodo *&pila, string &, float &, float &, float &, float &);

int main(){
	nodo *pila=NULL;                 //la pila esta vacia 
	string nombre;
	float Cal1,Cal2,Cal3,Prom;
	int opc;                //funciona para las opciones como el switch
	char res;              //funciona para ejecutar las respuestas y diferenciarlas de un si o un no 
	do{
	system("cls");         //limpieza de la pantalla
	cout<<"1) Ingrese \n";          //se crea el menu principal
	cout<<"2) Eliminar \n";
	cout<<"3) Salir\n";
	cout<<endl<<"Seleccione la opcion: ";
	cin>>opc;
	
	switch(opc){
		case 1:
			do{
			system("cls");
		
			gotoxy(1,1);cout<<"nombre:";
			gotoxy(1,3);cin>>nombre;
			gotoxy(10,1);  cout<<" Ingrese  calificacion 1"<<endl;
			gotoxy(20,3);  cin>>Cal1;
			gotoxy(40,1);  cout<<" Ingrese  calificacion 2"<<endl;
			gotoxy(50,3);  cin>>Cal2;
			gotoxy(70,1);  cout<<" Ingrese  calificacion 3"<<endl;
			gotoxy(80,3);  cin>>Cal3;
			Prom=(Cal1+Cal2+Cal3)/3;          //operacion para obtener el promedio 
			gotoxy(100,1); cout<<" El promedio es: ";
			gotoxy(110,3);cout<<Prom;
		    agregar(pila,nombre,Cal1,Cal2,Cal3,Prom);
			cout<<endl<<"Desea agregar otro elemento? s/n: "<<endl;
	        cin>>res;
	        }while(res!='n');   //diferncia de respuestas 
			break;
		case 2:
			cout<<"eliminar registro de la pila correctamente"<<endl;
	    	while(pila!=NULL){
	    	    eliminar(pila,nombre,Cal1,Cal2,Cal3,Prom);
	    		if (pila!=NULL){
	    			cout<<nombre<<" , "<<Cal1<<" , "<<Cal2<<" , "<<Cal3<<" == "<<Prom<<endl; 
				}
			    else{
			    	cout<<nombre<<" , "<<Cal1<<" , "<<Cal2<<" , "<<Cal3<<" == "<<Prom<<"."<<endl; 
			    }
		    }   
			break;
		case 3:
			system("cls");  //borrador de pantalla
			return 0;
			break;
			
			
		
	}
	cout<<endl<<"\nDesea regresar al menu de opciones? s/n: "<<endl;
	        cin>>res;
	        }while(res!='n');
	getch();
}

void agregar(nodo *&pila, string N, float C1, float C2, float C3, float P){
	nodo *nvo_nodo=new nodo();
	
    nvo_nodo -> nombre=N;
    nvo_nodo -> Cal1=C1;
    nvo_nodo -> Cal2=C2;
    nvo_nodo -> Cal3=C3;
    nvo_nodo -> Prom=P;
    nvo_nodo->siguiente=pila;
    pila = nvo_nodo;
    gotoxy(1,8);cout<<"\nLas calificaciones de "<<N<<" han sido registradas";
}

void eliminar(nodo *&pila, string &N, float &C1, float &C2, float &C3, float &P){
	nodo *aux = pila;
	N= aux ->nombre;
	C1= aux ->Cal1;
	C2= aux ->Cal2;
	C3= aux ->Cal3;
	P= aux ->Prom;
	pila=aux->siguiente;
	delete aux;
}
