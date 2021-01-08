#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <stdio.h>
#include <windows.h>


using namespace std;

struct nodo {
	int info;
	nodo *izq, *der;
};


void insertar(nodo *&raiz, int x);
nodo *buscar(nodo *raiz, int x);
void verPreOrden(nodo *p);
void verEntreOrden(nodo *p);
void verPostOrden(nodo *p);	
void mostrar(nodo *p, int colpadre, int col, int fil);
void rayitas (int cuantas);
//void gotoxy(int x,int y);

int main(){
	nodo *raiz = NULL;
	nodo *p;
	int op, x;
	
	do{
	
	system("cls");
	cout << "Arboles de Busqueda - Opciones";
	cout << "\n1. Cargar un codigo en el arbol";
	cout << "\n2. Buscar un elemento";
	cout << "\n3. Mostrar en PreOrden";
	cout << "\n4. Mostrar en EntreOrden";
	cout << "\n5. Mostrar en PostOrden";
	cout << "\n6. Mostar en forma natural...";
	cout << "\n7. Salir";
	cout << "\n\nIngrese opcion:  ";
	cin >> op;
	
	switch (op){
	
 
 		   		 case 1:
 		   		 	  	cout << "Ingrese clave a insertar (con -1 termina) :  ";
 		   		 	  	cin  >> x;
 		   		 	  	
 		   		 	  		 while (x != -1) {
 		   		 	  		 	   	  insertar(raiz, x);
 		   		 	  		 	   	  cout << "Insertar otra clave (con -1 termina) : ";
 		   		 	  		 	   	  cin >> x;
									}
 		   							  break; 	
				case 2:
					   cout << "Clave a buscar (con -1 termina) : ";
					   cin >> x;
					       	  
					       	  while(x != -1){
					       	  		  if (buscar(raiz, x) != NULL ){
					       	  		  	
					       	  		  	 			   cout << "Existe.... ";
					       	  		  	
					       	  		  	
										   } else{
										   	cout << "No existe...";
										   }
										   
										   cout << "\nOtra clave a buscar (con -1 termina )..";
										   cin >> x;
										   
									}
									break ;
									
				case 3: 
					 	cout << "Contenido del arbol, PreOrden: \n";
					 	verPreOrden(raiz);
					 	getch();
					 	break;
					 	 
				case 4: 
				cout << "Contenido del arbol, EntreOrden: \n";
					 	verEntreOrden(raiz);
					 	getch();
					 	break;
				
				case 5: 
					 	cout << "Contenido del arbol, PostOrden: \n";
					 	verPostOrden(raiz);
					 	getch();
					 	break;
						
				case 6: 
					 	cout << "Contenido del arbol, en forma natural: \n";
					 	/*mostrar(raiz, 0, 40, 1);*/
					 	getch();
					 	break;					 	
					 	
				case 7: ;	
	
	
	
	
					 }
	
	
	
}
	 while(op != 7);
	 
}

void insertar (nodo *&raiz, int x){
	
	 nodo *p = raiz, *q = NULL;
	 
	 while (p != NULL && x != p->info ){
	 	
	 	   q = p;
	 	   if(x > p->info ){
	 	   	 p = p->der;
	 	   	
			}else{
				p = p->izq;
			}
	 }
	 
	 if (p == NULL){
	 	// no existe la inserta
	 	nodo *nuevo = new nodo;
	 	if (nuevo != NULL){
	 		 
	 		 	  nuevo->info = x;
	 		 	  nuevo->izq = nuevo->der = NULL;
	 		 	  if(q == NULL){
	 		 	  	   	  raiz = nuevo;
					}else{
						  	   if(x > q->info){
						  	   		  q->der = nuevo;
			 						  		  }else{
			 						  		  		q->izq = nuevo;
												 }
					}
		 }
		  else{
		  	cout << "Error: falta memoria :  ";
		  	getch();
		  	exit (1);
		  }
	 
}
	
}

nodo *buscar (nodo *raiz, int x){
	
	nodo *p = raiz;
	
	while(p != NULL && x != p->info){
		if (x < p->info){
			p = p->izq;
		}else{
			p = p->der;
		}
	}
	return p;
}

void verPreOrden( nodo *p){
	if(p != NULL){
		cout << p->info << "-"; 		//paso 1: visitar el nodo actual
		verPreOrden(p->izq);		//paso 2: Preorden al subarbol izquierdo
		verPreOrden(p->der);		//paso 3: Preorden al subarbol derecho
	}
}

void verEntreOrden(nodo *p ){
	
	if (p != NULL){
		
		verEntreOrden (p->izq);
		cout<< p->info << "-";
		verEntreOrden(p->der);
	}
}

void verPostOrden(nodo *p ){
	
	if (p != NULL){
		
		verPostOrden (p->izq);
		verPostOrden (p->der);
		cout<< p->info << "-";
		
	}
}

/*void mostrar (nodo *p, int colpadre, int col, int fil){
	
	if (p != NULL){
		
		int  delta = abs(col - colpadre)/2;
		int ci = col - delta; 			//columna del hijo izquierdo
		int cd = col + delta;    	 // COLUMNA del hijo derecho
		
		if (p->izq != NULL){
			
			gotoxy (ci, fil);
			cout << "+";
			rayitas (delta-1);
		}else {
			
			gotoxy(col, fil);
			
		}
		cout << p->info;
		
		if (p->der != NULL){
			
			rayitas (delta-1);
			cout << "+";
			
		}
		
		mostrar(p->izq, col, ci, fil+1);
		mostrar(p->der, col, cd, fil+1);
		
		
	}
}



void rayita (int cuantas){
	
	int i;
	for (i=1 ; i<= cuantas ; i++){
		cout << " - ";
	}
}*/

/* void gotoxy(int x,int y){  
      HANDLE hcon;  
      hcon = GetStdHandle(STD_OUTPUT_HANDLE);  
      COORD dwPos;  
      dwPos.X = x;  
      dwPos.Y= y;  
      SetConsoleCursorPosition(hcon,dwPos);  
 }  */

/*void gotoxy(int x,int y) {
    printf("%c[%d;%df", 0x1b, y, x);
}*/


	
