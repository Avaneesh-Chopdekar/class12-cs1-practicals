#include<iostream.h>
#include<conio.h>

/*
    Aim: Write a program in c++ with ratio class using member functions like
    assign() function to initialize its member data (integer numerator and denominator),
    convert() function to convert the ratio into double, 
    invert() function to get the inverse of the ratio and
    print () function to print the ratio and reciprocal.
*/

class Ratio
{
    int num, den;

    public:

    void assign(int n, int d)
    {
        num = n;
        den = d;
    }
    void convert();
    void invert();
    void print();
};

void Ratio::convert()
{
    cout << "The ratio is " << double (num) / double (den);
}

void Ratio::invert()
{
    int temp;
    temp = num;
    num = den;
    den = temp;
}

void Ratio::print()
{
    cout << endl << "The values are " << num << " / " << den << endl;
}

void main()
{
    clrscr();

    Ratio r;
    r.assign(22, 7);
    r.convert();
    r.invert();
    r.print();
    r.invert();
    cout << "After inverting the values";
    r.print();

    getch();
}
