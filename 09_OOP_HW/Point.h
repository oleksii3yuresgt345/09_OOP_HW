#pragma once
#include <iostream>
#include <Windows.h>
using namespace std;

class Point
{
private:
	int x;
	int y;
public:
	Point() :x(0), y(0) {};
	Point(int x, int y);
	void Print()const;
	Point operator --();
	Point operator ++();
	bool operator >(const Point& other)const;
	bool operator <(const Point& other)const;
	Point operator !();
};

