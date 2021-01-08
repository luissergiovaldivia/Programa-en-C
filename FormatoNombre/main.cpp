//**************************************************************************************************
//
//Programa formato de nombre
//Este programa lee un numero de seguro social, un nombre, un 
//segundo nombre o inicial y el apellido del archivo inData
//el nombre se escribe en el archivo outData en tres formato
//       1.Nombre, segundo nombre, apellido y numero de seguro
//          social.
//       2.Apellido, nombre, segundo nombre, y numero de seguro
//          social.
//       3.Apellido, nombre, segundo nombre, y numero de seguro
//          social.
//      4.Apellido, nombre, inicial del segundo nombre y numero de 
//          seguro social.
//**************************************************************************************************

#include <fstream>                  //Access ofstream
#include <string>                   //Access string

using namespace std;

int main()
    {
        //Declarar y abrir achivos
        ifstream inData;
        ofstream outData;
        inData.open("name.dat");
        outData.open("name.out");

        //Declarar variables
        string socialNum;           //Numero de seguro social
        string firstName;            //Nombre
        string lastName;             //Apellido
        string middleName;           //  segundo nombre
        string inicial;             //inicial del segundo nombre

        //Leer los datos del archivo inData
        inData >> socialNum >> firstName >> middleName >> lastName;

        //Tener acceso a la inicial del segundo nombre y anexar un punto
        inicial = middleName.substr(0,1) + ".";

        //Produccir informacion en los formatos requeridos
        outData << firstName << ' ' << middleName << ' ' << lastName
                << ' ' << socialNum << endl;

         outData << lastName << " , " << firstName << ' ' << middleName 
                    << ' ' << socialNum << endl;

        outData << lastName << " , " << firstName << ' ' << inicial 
                    << ' ' << socialNum << endl;

        outData << firstName << ' ' << inicial 
                    << ' ' << lastName << endl;

        //cerrar archivos
        inData.close();
        outData.close();

        return 0;       




    }
