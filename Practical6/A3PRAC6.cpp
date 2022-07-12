#include<iostream.h>
#include<conio.h>

/*
    Aim:
    Write a program in C++ that first initializes an array of 5 given numbers.
    The program must add these numbers by traversing this array with a pointer.
    The output should print starting address of array and size of number to which it points.
    The program must also print the sum and pointer address with the addition of every number as well as the ending address.
*/

void main()
{
    float a[] = {10.2, 3.9, 4.6, 5.5, 6.9};
    float *ptr, sum = 0;
    ptr = a;

    clrscr();

    cout << "\nStarting Address\tSize\tEnding Address\tValue of Sum\n";
  
    for (int i = 0; i < 5; i++) 
    {
        sum += *ptr;
        cout << "\n" << ptr << "\t\t" << sizeof(*ptr) << "\t";
        ptr += 1;
        cout << ptr << "\t\t" << sum;
    }

    getch();

}
