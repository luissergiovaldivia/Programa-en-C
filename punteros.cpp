//#include <conio.h>
//#include <iostream>
//#include <stdio.h>
////#include <conio.c>
//#include<stdlib.h>
//
//using namespace std;
//
//void cargar(int v[50], int n);
//float promedio (int v[50], int n);
//
//int main()
//
//{
//	int *v, n;
//	float prom;
//	//clrscr();
//	system("cls");
//	cout << "Ingrese la cantidad de componentes que desea: ",
//	cin >> n;
//	
//	v = new int [n]; // aqui crea el arreglo en forma dinamica
//	
//	if (v != NULL){
//		
//		cout << "\n\nIngrese los valores : \n\n";
//		cargar (v,n);
//		prom = promedio (v,n);
//		cout << "\n\nEl promedio es : " << prom;
//		delete v ; // aqui destruye el arreglo
//		
//	}
//	else cout << "Error : no hay memoria para crear  el arreglo ";
//	getch();	
//		
//}
//
//void cargar (int v[50], int n){
//	int i ;
//	for (i = 0; i< n ; i++){
//		
//		cout << "v[" << i << "]";
//		cin >> v[i];
//	}
//}
//
//float promedio (int v[50], int n){
//	
//	int a = 0, i;
//	for (i = 0; i< n; i ++){
//		a += v[i];
//		
//		return (float) a/n;
//	}
//}
