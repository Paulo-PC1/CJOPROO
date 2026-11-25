#include "vector2d.hpp"
#include <iostream>

using namespace std;

int main(void)
{
	
	cout << "\n Sobrecarga de Operadores\n\n";
	
	Vector2D v1(1.0f, 2.0f), v2(3.0f, 4.0f);
	
	Vector2D v3 = v1 + v2;
	Vector2D v4 = v1 - v2;
	Vector2D v5 = 2.0f * v1;
	Vector2D v6 = v1 * 3.0f;
	
	cout << "v1 + v2: ";
	v3.printVector2D();
	
	cout << "v1 - v2: ";
	v4.printVector2D();
	
	cout << "2 * v2: ";
	v5.printVector2D();
	
	cout << "v1 * 3: ";
	v6.printVector2D();
	
	
	return 0;
}
