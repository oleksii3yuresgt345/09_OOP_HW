#pragma once
#include "Point.h"

class Vector
{
private:
	Point* points;
	int countPoints;
public:
	Vector() :points(nullptr), countPoints(0) {};
	Vector(const Vector& other);
	Vector(Vector&& other);
	void Add(Point number);
	void Print();
	Vector operator=(const Vector& other);
	~Vector();

};

