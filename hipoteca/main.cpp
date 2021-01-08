//*******************************************************************************************************
// Programa Calculadora de pago de hipoteca
// este programa detemiana los pagos mensuales de una hiporteca dada
// la cantidad prestada, la tasa de interes anual y el numero de 
// a�os
//*********************************************************************************************************

#include <iostream>
#include <fstream>
#include <iomanip>
#include <cmath>

using namespace std;
#include <fstream>
#include<cmath>
#include<iomanip>

using namespace std;



/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {

	//input variables

	float loanAmount;
	float yearlyInterest;
	int numberofYear;
	ofstream outData;
	ifstream inData;
	ifstream inFile;
	ofstream outFile;

	//local variables
	float monthlyInterest;
	int numberofPayments;
	float payment;
	string fileName;

	inData.open ("loan.in");
	//outData.open ("loan.out");
	cout << "Instroduca el nombre del archivo de entrada : ";
	cin >> fileName;
	outFile.open(fileName.c_str());
	
	//inData.open ("C:\Users\Sofia\Documents\loan.in");
	//outData.open ("loan.out");


	//Read values from file
	inData >> loanAmount >> yearlyInterest >> numberofYear;

	//Calculate value

	monthlyInterest = yearlyInterest * 0.01 / 12;
	numberofPayments = numberofYear * 12;

	payment = (loanAmount * pow (1 + monthlyInterest,numberofPayments)
				* monthlyInterest)/
				(pow(1+monthlyInterest, numberofPayments) -1);



	//Output result
	
	
	/*outData << fixed << setprecision(2) << "Para una cantidad prestada de " << loanAmount
			<< " con una tasa de interes de " << setprecision(4)
			<< yearlyInterest << " y una "
			<< numberofYear << " hipoteca anual " << endl;*/
			
	outFile << fixed << setprecision(2) << "Para una cantidad prestada de " << loanAmount
			<< " con una tasa de interes de " << setprecision(4)
			<< yearlyInterest << " y una "
			<< numberofYear << " hipoteca anual " << endl;
	
	/*outData << fixed << setprecision (2)
			<< "sus pagos mensuales son $" << payment
			<< "." << endl;*/

	outFile << fixed << setprecision (2)
			<< "sus pagos mensuales son $" << payment
			<< "." << endl;
			
	inData.close();
	outData.close();
	outFile.close();
	



	
	return 0;
}
