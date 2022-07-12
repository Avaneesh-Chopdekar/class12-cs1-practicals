#include <iostream.h>
#include <conio.h>

/*
    Aim:
    To write a program in C++ that initializes an array of given 10 real numbers. 
    The program should sort the number in ascending / descending order using the bubble sort method.
    It should print the given list of numbers as well as sorted list.
*/


void main()
{
    int i, a[10], temp, j;

    clrscr();
    
    cout << "Enter any ten numbers in array:\n";
    
    for (i = 0; i < 10; i++)
    {
        cin >> a[i];
    }

    cout << "\nData before sorting:\n";
    for (j = 0; j < 10; j++)
    {
        cout << a[j] << " ";
    }
    for (i = 0; i <= 10; i++)
    {
        for (j = 0; j <10; j++)
        {
            if (a[j] > a[j + 1])
            {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
            
        }
        
    }

    cout << "\nData after sorting:\n";
    for (j = 0; j < 10; j++)
    {
        cout << a[j] << " ";
    }

    getch();
    
}
