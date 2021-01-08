#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

using namespace std;

struct nodo
{
	int info;
	nodo *next;
};

void insertPrimero(nodo *&frente, int x);
int borrarPrimero(nodo *&frente);
int imprimir(nodo *&frente);
void insertUltimo(nodo *&frente, int x);
int borrarUltimo(nodo *&frente);
void insertLuego(nodo *&frente, int x);
int borrarLuego(nodo *&frente);
void mostrar(nodo *frente);
int size(nodo *&frente);

int main()
{
	int op, x;
	//int a, b, c, x;

	nodo *frente = NULL;

	do
	{
		/* code */
		   system("cls");
			cout <<"Operaciones en una lista simple";
			cout << "\n1. Insertar un nodo adelante";
			cout << "\n2. Insertar un nodo al fondo";
			cout << "\n3. Insertar un nodo luego de otro dado";
			cout << "\n4. Borrar el nodo de adelante ";
			cout << "\n5. Borrar el nodo del fondo";
			cout << "\n6. Borrar el nodo siguiente a otro dado";
			cout << "\n7. Mostar la lista";
			cout << "\n8. Mostar el tamaño de la lista";
			cout << "\n9. Terminar";
			cout << "\n\n\n\t\t\tElija";
			cin >> op;
			system("cls");

	switch (op)
	{
	case 1:/* constant-expression */
		/* code */
		cout << "ingrese un numero :  ";
		cin >> x;
		insertPrimero(frente,x);
		cout << "El valor se inserto al principio de la lista";
		getch();
		break;

	 case 2: /* constant-expression */
	 	/* code */
	 	cout << "ingrese un numero :  ";
	 	cin >> x;
	 	insertUltimo(frente, x);
	 	cout << "El valor se inserto al final de la lista";
	 	getch();
	 	break;

	case 3: /* constant-expression */
		/* code */
		cout << "ingrese un numero :  ";
		cin >> x;
	//	insertLuego(frente, x);
		insertLuego(frente,x);
	
		cout << "El valor se inserto como segundo de la lista";
		getch();
		break;

	case 4: /* constant-expression */
		/* code */

		x = borrarPrimero(frente);

		cout << "\nSe borro el primero en la lista:.." ;
		getch();
		break;

	case 5: /* constant-expression */
		/* code */

		x = borrarUltimo(frente);

		cout << "\nSe borro el ultimo en la lista:..";
		getch();
		break;

	case 6: /* constant-expression */
		/* code */

		x = borrarLuego(frente);

		cout << "\nSe borro el segundo en la lista:..";
		getch();
		break;

	case 7: cout << "Asi esta la lista : \n";
			mostrar(frente);
			getch();
			break;
	
	case 8:cout << "Asi es el tamaño de la lista : \n";
			size(frente);
			getch();
			break;;
	
	case 9:;
	}

	} while (/* condition */op !=9);
}
	

void insertPrimero(nodo *&frente, int x)
{
	nodo *p = new nodo;

	if (p != NULL)
	{
		p->info = x;
		p->next = frente;
		frente = p;
	}
	else{
		cout << "Error se lleno el Heap.";
		getch();
		exit(1);
	}
}


int borrarPrimero(nodo *&frente)
{
	if (frente != NULL)
	{
		nodo *p = frente;
		int y = p->info;
		frente = frente->next;
		delete p;
		return y;
	}
	else
	{
		cout << "lista vacia ... no se puede borrar un nodo";
		getch();
		exit(1);
	}
}

void insertUltimo(nodo *&frente, int x)
{
	nodo *r = new nodo;

	if (r != NULL)
	{
		nodo *p = frente;
			while (p != NULL && p->next !=NULL)
			{
				/* code */
				p = p->next;
				r ->info = x;
				r ->next = NULL;
				if (p != NULL)
				{
					/* code */
					p ->next = r;
				} else
				{
					/* code */
					frente = r;
				}
				
				
				
			}
			

	}
	else
	{
		cout << "Error se lleno el Heap.";
		getch();
		exit(1);
	}

}

int borrarUltimo(nodo *&frente)
{
	int x;
	nodo *p = frente, *q = NULL;

	while (p != NULL && p->next != NULL)
	{

		q = p;
		p = p-> next;

	}
		if (p != NULL)
		{
			x = p-> info;
			if (q != NULL)
			{
				/* code */
				q->next = NULL; 
			} else
			{
				/* code */
				frente = NULL;
			}
			delete p;
			return x;
		}
		else
		{
			cout << "lista vacia ... no se puede borrar un nodo";
			getch();
			exit(1);
		}
	}


	void insertLuego(nodo *&p, int x){

		if (/* condition */ p != NULL)
		{
			/* code */
			nodo *r = new nodo;

			if (r != NULL)
			{
				/* code */
				r ->info = x;
				r ->next = p->next;
				p->next = r;
			}
			else
			{
				/* code */
				cout << "Error: se lleno el heap...";
				exit(1);
			}
}
		else
		{
			/* code */
			cout <<"Error: operacion imposible...";
			exit(1);
		}
		
			
		
		
	}


int borrarLuego(nodo *&p){

	if (p != NULL && p->next != NULL)
	{
		/* code */
		nodo *q = p->next;
		int x = q->info;
		p->next = q->next;
		delete q;
		return x;
	}
	else
	{
		/* code */
		cout << "Error: operacion imposible ";
		exit(1);
	}
	

}

void mostrar(nodo *frente){
		nodo *p = frente;
		while (p != NULL)
		{
			/* code */
			cout << p->info << " "<< p->next << " ";
			
			p = p->next;
		}
		

}

int size(nodo *&frente)
{
	nodo *p = frente;
	int suma = 0;
	
	while(p != NULL){
		
		suma = suma + 1;
		
				p = p->next;
	}
	cout << "El tamaño de la lista es la :   " << suma;
	
}


