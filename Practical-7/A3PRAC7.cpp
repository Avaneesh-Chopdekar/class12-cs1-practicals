#include<iostream.h>
#include<conio.h>

/*
    Aim: Implement class circle in c++.
    Each object of class is represent a circle storing its radius.
    Include a default constructor. Access area and circumference function.
    The program must print the area and circumference in the output.
*/

class Circle
{
    private:
    
    int radius;
    float area, circum;

    public:

    void getRadius()
    {
        cout << "Enter radius:\t";
        cin >> radius;
    }

    void calculate()
    {
        area = (float) 3.14 * radius * radius;
        circum = 2 * 3.14 * radius; 
    }

    void print()
    {
        cout << "-----------------------------------------------" << endl;
        cout << "Radius of circle: " << radius << endl;
        cout << "Area of circle: " << area << endl;
        cout << "Circumference of circle: " << circum << endl;
        cout << "-----------------------------------------------" << endl;
    }
};

void main()
{
    clrscr();

    Circle c;
    c.getRadius();
    c.calculate();
    c.print();

    getch();    
}
