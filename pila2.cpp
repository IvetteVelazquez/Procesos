//elaborar un programa donde se pueda agregar el nombre de una
//presona y su edad; hasta que el usuario presione un 0. 
//Eliminar toda la pila, utilice un menu para agregar y quitar.

#include <iostream>
#include <conio.h>
#include <stdlib.h> // Se utiliza para new.

using namespace std;


			struct nodo{ //SE NECESITA UNA ESTRUCTURA NODO
			int opc;
			char nombre; //PARA LOS NUMEROS ENTEROS
			int edad; 
			nodo *siguiente; //NODO DE BAJO DE LA PILA 
};

//prototipo de funciones

	void agregarpila(nodo *&pila, int &);//PASAR COMO PUNTERO Y POR REFERENCIA E INT PARA EL DATOS
		void sacarpila(nodo *&pila, int &);//AHORA EL ELEMENTO INT & ES POR REFERENCIA 
	
main(){
	
		nodo *pila = NULL ;
		int opc;
		char nombre;
		int edad;
		char res;
		
		
			do{//Se agregan todos los elementos que quiera el usuario a la pila 
	
				cout<<"ingresa nombre:";
					cin>>nombre;
						agregarpila(pila,nombre);
				cout<<"ingresa edad:";
					cin>>edad;
						agregarpila(pila,edad);
							cout<<endl<<"deseas agregar otro elemento a pila s/n";
								cin>>res;
	
	cout<<"ingresa edad:";
					cin>>edad;
						agregarpila(pila,edad);
				cout<<"ingresa edad:";
					cin>>nombre;
						agregarpila(pila,edad);
							cout<<endl<<"deseas agregar otro elemento a pila s/n";
								cin>>res;
	}
	
	
			while (res=='s' || res=='S');
				
			//MOSTRAR LOS ELEMENTOS
				cout<<endl<<"sacando todos los elementos de la pila";
					while(pila!=NULL)//cuando no sea el final de la pila puedes sacar elementos
						sacarpila(pila,nombre);
							if(pila!=NULL){
								cout<<nombre<<":"<<edad<<":"<< ",";
		}
				else{
					cout<<nombre<<":"<<edad<<":"<< ",";
					}
		
		getch();		
do{


cout<<"1) Insertar datos: "<<endl;
cout<<"2) Eliminar datos: "<<endl;
cout<<"Seleccione opcion: ";
cin>>opc;
switch(opc)
{
	case 1:
		do{
			
cout<<"Teclee el elemento y nombre: \n";
cin>>nombre;
agregarpila(pila,nombre);
cout<<"desea otro elemento?: " "S/N: ";
cin>> res;

}while(res!='N');
	break;
	
	case 2:
	cout<<"Sacar elementos de la PILA:\n";
	while(pila!=NULL){
	sacarpila(pila,nombre);
	
	if(pila!=NULL){
		cout<<nombre<<",";
	}
		else {
			cout<<nombre<<".";
		}
	}
	break;	
}

cout<<"Desea otra accion: s/n:\n";
cin>>res;
}

while(res!='n');


			}
			void sacarpila(nodo *&pila , int &n) {//son los datos que agrego el usuario
		
{	
		nodo*nvo_nodo = new nodo();
			nvo_nodo -> nombre = n;
				nvo_nodo -> siguiente=pila;
					pila = nvo_nodo;
						cout<<"Elemento "<<n<<" agregado a PILA correctamente\n"<<endl;
}

				void sacarpila(nodo*&pila, int &n);{
					nodo *aux=pila;
						n=aux->nombre;
							pila=aux->siguiente;
								delete aux;


}	

	}

