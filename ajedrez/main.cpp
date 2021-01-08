//****************************************************************************************
//Programa tablero de ajedrez
//Este programa imprime un patronde tablero de ajederez  que se
//construye apartir de cadenas basicas de caracteres blanco  y negro
//****************************************************************************************

#include <iostream>
#include <string>
 
using namespace std;

const string Black = "********";				//Define una linea de un cadro negro
const string White =  "        ";				//Define una linea de cuadro blanco

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	string whiteRow;							//Un renglon que comienza con un renglon blanco
	string blackRow;							//Un renglo que comienza con un renglon negro
	
	//Crear un remglon blanco-negro al concatenar las cadenas basicas
	
	whiteRow = White + Black + White + Black + 
				White + Black + White + Black;

	// Crear un renglon negro-blanco al concatenar las cadenas basicas

	blackRow = Black + White + Black + White + 
				Black + White + Black + White;

	//Imprimir conco renglones blanco-negro

	cout << whiteRow << endl;
	cout << whiteRow << endl;
	cout << whiteRow << endl;
	cout << whiteRow << endl;
	cout << whiteRow << endl;

	//Imprimir cinco renglon negro..-blanco

	cout << blackRow << endl;
	cout << blackRow << endl;
	cout << blackRow << endl;
	cout << blackRow << endl;
	cout << blackRow << endl;

	//Imprimir conco renglones blanco-negro

	cout << whiteRow << endl;
	cout << whiteRow << endl;
	cout << whiteRow << endl;
	cout << whiteRow << endl;
	cout << whiteRow << endl;

	//Imprimir cinco renglon negro..-blanco

	cout << blackRow << endl;
	cout << blackRow << endl;
	cout << blackRow << endl;
	cout << blackRow << endl;
	cout << blackRow << endl;

	//Imprimir conco renglones blanco-negro

	cout << whiteRow << endl;
	cout << whiteRow << endl;
	cout << whiteRow << endl;
	cout << whiteRow << endl;
	cout << whiteRow << endl;

	//Imprimir cinco renglon negro..-blanco

	cout << blackRow << endl;
	cout << blackRow << endl;
	cout << blackRow << endl;
	cout << blackRow << endl;
	cout << blackRow << endl;

	//Imprimir conco renglones blanco-negro

	cout << whiteRow << endl;
	cout << whiteRow << endl;
	cout << whiteRow << endl;
	cout << whiteRow << endl;
	cout << whiteRow << endl;

	//Imprimir cinco renglon negro..-blanco

	cout << blackRow << endl;
	cout << blackRow << endl;
	cout << blackRow << endl;
	cout << blackRow << endl;
	cout << blackRow << endl;
	
	
	
	return 0;
}
