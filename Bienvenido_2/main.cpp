//*******************************************************************************************
//  Programa Bienvenido
//Este programa imprime un mensaje "¡Bienvenido a casa!"
//******************************************************************************************

#include <iostream>

using namespace std;

void PrintLineas(int);            //Prototipos de funcion
//void Print4Lineas();            


int main()
                {
                        PrintLineas(2);                 //Llamada de una funcion
                        cout << "¡Bienvenido a casa!!" << endl;
                        PrintLineas(4);                 //Llamada de una funcion
                        
                        return 0;

                }

//*****************************************************************************************

   /* void PrintLineas()

            //esta funcion imprime dos lineas de asterisco
            {
                    cout <<"************************************" << endl;
                    cout <<"************************************" << endl;

            }*/

//********************************************************************************

void PrintLineas(int numLineas)

            //esta funcion imprime cuatro lineas de asterisco
            {
            	
            	int count ;										//Varoable control de ciclo
            	count = 1;
            	
            		while (count <= numLineas)
            		{
            		cout <<"************************************" << endl;
					count ++;	
            			
            			
					}
            	
                    
                    /*cout <<"************************************" << endl;
                    cout <<"************************************" << endl;
                    cout <<"************************************" << endl;*/
                    
            }
