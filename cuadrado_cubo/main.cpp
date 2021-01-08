#include <iostream>

using namespace std;

int Square(int);
int Cube (int);

int main ()
{
	cout << "el cuadrado del 27 es" << Square(27);
	cout << "y el cubo de 27 es " << Cube(27);
	return 0;
}

int Square ( int n)
	{
		return n * n;
	}
	
int Cube ( int n)
	{
		return n * n * n;
	}
