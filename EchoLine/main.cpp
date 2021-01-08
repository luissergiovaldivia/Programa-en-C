//****************************************************************************************************
//Programa Echoline
//Este programa lee y repite los caracteres de una linea 
//de un archivo de linea
//******************************************************************************************************

#include <iostream>
#include <fstream>					//Para archivo I/O

using namespace std;



/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
				char inChar;			//Un caracter de entrada
				ifstream inFile;		//Archivos de datos
				
				inFile.open("text.dat");			//Intentar abrir el archivo  de entrada
				if (!inFile)						//Se abrio?
							{
								cout<<"No Puedo obtener el archivo de entrada. ";
																					//No impremir mensaje
								return 1;											//Terminar programa
							}
				
				inFile.get(inChar);								//Obtener el primer caracter
					while (inChar != '\n')
									{
										cout << inChar;		//Repitelo
										inFile.get (inChar);	//Obtener el siguiente caracter
										
									}
										cout << endl;
	return 0;
}
