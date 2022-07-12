#include<iostream.h>
#include<conio.h>

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
