#include <iostream>
#include <iomanip> 		//Para setpresicion

using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() 
{
	int partNumber;
	int quantity;
	float	unitPrice;
	float totalPrice;
	
	cout << fixed << showpoint 					// Establecer punto flotante
			<< setprecision (2);				// Formato de sailda
			
	cout << "Introdusca el numero de parte : "  << endl;			//Prompts
	cin >> partNumber;			
	
	cout << "Introdusca la cantidad pedida de esta parte: "		// prompts
			<< endl;
			
	cin >> quantity;
	
	cout << " Introduzca  el precio unitario para esta parte : "		//Prompts
			<< endl;
	cin >> unitPrice;
	
	totalPrice = quantity * unitPrice ;
	cout << "Parte " << partNumber 								//Echo print
			<< ", cantidad " << quantity
			<< ", a $ " << unitPrice << "  cada una " << endl;
			
	cout << "total $ " << totalPrice << endl;		
			
	
	
	
	return 0;
}
