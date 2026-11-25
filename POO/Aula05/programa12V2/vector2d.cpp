#include <iostream>
#include "vector2d.hpp"

using namespace std;

Vector2D::Vector2D(float x, float y) : x(x), y(y) {}

Vector2D Vector2D::operator+(const Vector2D &vec) const
{
	return Vector2D(x + vec.x, y + vec.y);
}

Vector2D Vector2D::operator-(const Vector2D &vec) const
{
	return Vector2D(x - vec.x, y - vec.y);
}

Vector2D operator*(float scalar, const Vector2D &vec)
{
	return Vector2D(vec.x * scalar, vec.y * scalar);
}
Vector2D operator*(const Vector2D &vec, float scalar)
{
	return Vector2D(vec.x * scalar, vec.y * scalar);
}

void Vector2D::printVector2D() const
{
	cout << "(" << x << ", " << y << ")" << endl;
}
