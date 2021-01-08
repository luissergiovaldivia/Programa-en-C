// *****************************************************************
// Progrma del año bisiesto
//Este ´programa ingresa un año e impirme el año
//es un año bisiesto o no
//****************************************************************

#include <iostream>

using namespace std;

bool IsLeapYear( int );             //Prototipo para el subalgirutmo

int main ()
{
    int iyear, num[100];
    //char cyear[10];                                           //Año a ser probado
    //printf( "Introduzca un año por ejemplo , 1997");
                                             //Solicita la entrada
		cout << "Introduzca un año por ejemplo , 1997" ;
    cin >> iyear;  
    //int sscanf(cyear) ;   
  // iyear = atoi(cyear);
    
	//num[n] = str[n] - '0'   
	//iyear = num[];                               //lee el año

    if (IsLeapYear(iyear))
        {
                //cout << year << "Es un a�o bisiesto" << endl;
                cout << iyear << "Es un año bisiesto";
               // printf ( "Es un a�o bisiesto", year);

         }

    else
    {
        /* code */
        //cout << year << "no es un a�o bisisesto"<< endl;
        cout << iyear << "no es un año bisisesto";
        //printf("no es un ��o bisisesto", year);
    }

    return 0;
}
    

bool IsLeapYear( int iyear)
//IsLeapYear regresa verdadero si year ea un año bisiesto y 
// falso en cualquier otro caso

{
        if (iyear % 4 != 0)           //Year no es divisible entre 4
        {
            /* code */
            return false;                           //Si es asi, no puede se bisiesto
        }
        
        else if (iyear % 100 != 0/* condition */)        //Year no es mujltiplo de 100
        {
            /* code */
            return true;                                //Si es asi es bisiesto
        }

        else if (iyear % 400 != 0/* condition */)        //year no es multiplo de 400
        {
            /* code */  
            return true;                                // Si es asi es año bisiesto
        }

        else
        {
            
            return true;                                //es un año bisiesto
        }
        
        
        


}

