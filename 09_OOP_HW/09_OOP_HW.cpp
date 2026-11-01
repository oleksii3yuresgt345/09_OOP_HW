#include "Point.h"
#include "Vector.h"

int main()
{
    Point p1(5, -10);
    p1.Print();
    !p1;
    Sleep(2000);
    system("cls");
    p1.Print();
    Sleep(2000);
    system("cls");
    Point p2(25, 30);
    Point p3(25, 30);
    Vector vector1;
    vector1.Add(p1);
    vector1.Add(p2);
    vector1.Add(p3);
    vector1.Print();
    Vector vector2 = vector1;
    vector2.Print();
}
