#include "Vector.h"

Vector::Vector(const Vector& other)
{
	countPoints = other.countPoints;
	points = new Point[countPoints];
	for (int i = 0; i < countPoints; i++)
	{
		points[i] = other.points[i];
	}
}

Vector::Vector(Vector&& other)
{
	this->countPoints = other.countPoints;
	this->points = other.points;
	other.points = nullptr;
}

void Vector::Add(Point number)
{
	Point* temp = new Point[countPoints + 1];
	for (int i = 0; i < countPoints; i++)
	{
		temp[i] = points[i];
	}
	temp[countPoints] = number;
	delete[]points;
	countPoints++;
	points = temp;
}

void Vector::Print()
{
	for (int i = 0; i < countPoints; i++)
	{
		cout << i+1 << " Point:" << endl;
		points[i].Print();
		Sleep(2000);
		system("cls");
	}
}

Vector Vector::operator=(const Vector& other)
{
	this->countPoints = other.countPoints;
	if (points != nullptr)
		delete[]points;
	for (int i = 0; i < countPoints; i++)
	{
		this->points[i] = other.points[i];
	}
	return *this;
}

Vector::~Vector()
{
	if (points != nullptr)
		delete[]points;
}
