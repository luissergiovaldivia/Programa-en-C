//**************************************************************************************
// Prtogra Problema
//Este es un ejemplo de mal diseño de programa que causa un error cuando
//se ejecuta el programa
//**************************************************************************************



#include <iostream>
using namespace std;

void CountInts();

int count;              //Se supone que cuenta las lineas de entradas, pero ¿lo hace en realidad


int intVal;             //Mantiene un entero de entrada

int main ()
    {
            count = 0;
            cin >> intVal;

                while (/* condition */cin)
                {
                    /* code */
                    count ++;
                    CountInts();
                    cin >> intVal;
                }
                
            cout << count << "lineas de entrada procesadas, " << endl;
            return 0;   


    }


    void CountInts()

        //Cuenta el numero de enteros en una linea de entrada ( donde 99999
        //es un centinela en cada linea) e imprime la cuenta 
        // Nota: main() ya ha leido el primer entero sobre una linea    

        {
        	int count;		//se agrega esta linea para realizar correccion de programa
            count = 0;
            while (/* condition */intVal != 99999)
            {
                /* code */
                count ++;
                cin >> intVal;

            }
            
            cout << count << "enteros en esta linea." << endl;


        }
