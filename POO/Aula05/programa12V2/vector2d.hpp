#pragma once

class Vector2D{
	
	friend Vector2D operator*(float scalar, const Vector2D &vec);
	friend Vector2D operator*(const Vector2D &vec, float scalar);
	
public:
	
	Vector2D(float x = 0, float y = 0);
	
	Vector2D operator+(const Vector2D &vec) const;
	Vector2D operator-(const Vector2D &vec) const;
	
	void printVector2D() const;
	
private:
	
	float x, y;
	
};
