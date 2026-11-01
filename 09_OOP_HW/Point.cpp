#include "Point.h"

void SetPos(int x, int y)
{
	COORD c;
	c.X = x;
	c.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), c);
}

Point::Point(int x, int y)
{
	this->x = x;
	this->y = y;
}

void Point::Print()const
{
	cout << "X = " << x << endl;
	cout << "Y = " << y << endl;
	SetPos(abs(x), y);
	cout << "." << endl;
	SetPos(0, -2);
}

Point Point::operator--()
{
	this->x--;
	this->y--;
	return *this;
}

Point Point::operator++()
{
	this->x++;
	this->y++;
	return *this;
}

bool Point::operator>(const Point& other) const
{
	if ((this->x + this->y) > (other.x + other.y))
		return true;
	else
		return false;
}
bool Point::operator<(const Point& other) const
{
	if ((this->x + this->y) < (other.x + other.y))
		return true;
	else
		return false;
}

Point Point::operator!()
{
	this->x *= -1;
	this->y *= -1;
	return *this;
}