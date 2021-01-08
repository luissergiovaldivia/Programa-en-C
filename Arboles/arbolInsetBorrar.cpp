//#include <iostream>
//#include <conio.h>
//#include <stdlib.h>
//#include <stdio.h>
//
//
//using namespace std;
//
//struct nodo {
//	int info;
//	nodo *izq, *der;
//};
//
//
//void insertar(nodo *&raiz, int x);
//nodo *buscar(nodo *raiz, int x);
//
//int main(){
//	nodo *raiz = NULL;
//	nodo *p;
//	int op, x;
//	
//	do{
//	
//	system("cls");
//	cout << "Arboles de Busqueda - Opciones";
//	cout << "\n1. Cargar un codigo en el arbol";
//	cout << "\n2. Buscar un elemento";
//	cout << "\n3. Salir";
//	cout << "\n\nIngrese opcion:  ";
//	cin >> op;
//	
//	switch (op){
//	
// 
// 		   		 case 1:
// 		   		 	  	cout << "Ingrese clave a insertar (con -1 termina) :  ";
// 		   		 	  	cin  >> x;
// 		   		 	  	
// 		   		 	  		 while (x != -1) {
// 		   		 	  		 	   	  insertar(raiz, x);
// 		   		 	  		 	   	  cout << "Insertar otra clave (con -1 termina) : ";
// 		   		 	  		 	   	  cin >> x;
//									}
// 		   							  break; 	
//				case 2:
//					   cout << "Clave a buscar (con -1 termina) : ";
//					   cin >> x;
//					       	  
//					       	  while(x != -1){
//					       	  		  if (buscar(raiz, x) != NULL ){
//					       	  		  	
//					       	  		  	 			   cout << "Existe.... ";
//					       	  		  	
//					       	  		  	
//										   } else{
//										   	cout << "No existe...";
//										   }
//										   
//										   cout << "\nOtra clave a buscar (con -1 termina )..";
//										   cin >> x;
//										   
//									}
//									break ;
//				
//				case 3: ;	
//	
//	
//	
//	
//					 }
//	
//	
//	
//}
//	 while(op != 3);
//	 
//}
//
//void insertar (nodo *&raiz, int x){
//	
//	 nodo *p = raiz, *q = NULL;
//	 
//	 while (p != NULL && x != p->info ){
//	 	
//	 	   q = p;
//	 	   if(x > p->info ){
//	 	   	 p = p->der;
//	 	   	
//			}else{
//				p = p->izq;
//			}
//	 }
//	 
//	 if (p == NULL){
//	 	// no existe la inserta
//	 	nodo *nuevo = new nodo;
//	 	if (nuevo != NULL){
//	 		 
//	 		 	  nuevo->info = x;
//	 		 	  nuevo->izq = nuevo->der = NULL;
//	 		 	  if(q == NULL){
//	 		 	  	   	  raiz = nuevo;
//					}else{
//						  	   if(x > q->info){
//						  	   		  q->der = nuevo;
//			 						  		  }else{
//			 						  		  		q->izq = nuevo;
//												 }
//					}
//		 }
//		  else{
//		  	cout << "Error: falta memoria :  ";
//		  	getch();
//		  	exit (1);
//		  }
//	 
//}
//	
//}
//
//nodo *buscar (nodo *raiz, int x){
//	
//	nodo *p = raiz;
//	
//	while(p != NULL && x != p->info){
//		if (x < p->info){
//			p = p->izq;
//		}else{
//			p = p->der;
//		}
//	}
//	return p;
//}
//
//
//
//	
