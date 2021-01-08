#include <iostream>
#include <string>

using namespace std;

const string FIRST = "Hernan";						//Nombre de la persona
const string LAST = "Smith";						//Apellio de la persona
const char MIDDLE = 'G';							//Inicial intermedia de la persona




/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() 
		{
			string firstLAST; 					//Nombre en formato nombre-apellido
			string lastFIRST;					//Apellido  de la persona
			
			firstLAST = FIRST + " " + LAST; 
			cout << "El nombre en formato  nombre-apellido  es " << firstLAST ;				//<< endl;
			
			lastFIRST = LAST + " , " + FIRST + " , ";
			cout << "El nombre en formato apellido-nombre-inicial es ";
			cout << lastFIRST << MIDDLE << " . " ;				//<< endl;
			
			
		
	
	return 0;
		}			
