#include<iostream.h>
#include<string.h>
#include<conio.h>

void swap(int *p1, int *p2)
{
    int temp;
    temp = *p1;
    *p1 = *p2;
    *p2 = temp;
}

void main() 
{
    int a,b;

    clrscr();

    cout << "Enter two numbers" << endl;
    cin >> a >> b;

    cout << "\nNumbers before swapping:" << endl;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;

    swap(&a, &b);

    cout << "\nNumber after swapping:" << endl;
    cout << "Value of a = " << a << endl;
    cout << "Value of b = " << b << endl;

    getch();

}
