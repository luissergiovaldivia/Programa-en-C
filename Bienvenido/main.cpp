//*******************************************************************************************
//  Programa Bienvenido
//Este programa imprime un mensaje "¡Bienvenido a casa!"
//******************************************************************************************

#include <iostream>

using namespace std;

void Print2Lineas();            //Prototipos de funcion
void Print4Lineas();            


int main()
                {
                        Print2Lineas();                 //Llamada de una funcion
                        cout << "¡Bienvenido a casa!!" << endl;
                        Print4Lineas();                 //Llamada de una funcion
                        
                        return 0;

                }

//*****************************************************************************************

    void Print2Lineas()

            //esta funcion imprime dos lineas de asterisco
            {
                    cout <<"************************************" << endl;
                    cout <<"************************************" << endl;

            }

//********************************************************************************

void Print4Lineas()

            //esta funcion imprime cuatro lineas de asterisco
            {
                    cout <<"************************************" << endl;
                    cout <<"************************************" << endl;
                    cout <<"************************************" << endl;
                    cout <<"************************************" << endl;
            }
