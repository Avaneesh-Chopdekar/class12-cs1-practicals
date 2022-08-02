#include<iostream.h>
#include<conio.h>
#include<string.h>
#include<stdio.h>

/*
    Aim:
    To write a program in C++ to input the given string (including spaces)
    and reverse it using a function which locates the end of the string
    and swap the first character with the last character,
    the second character with second last character and so on.
*/

void main()
{
    
    clrscr();

    cout << "\nEnter a string: ";
    char m[100], temp;
    gets(m);

    int len = strlen(m);
    int l = len - 1;
    for (int i = 0; i < len/2; i++)
    {
        temp = m[i];
        m[i] = m[l];
        m[l] = temp;
        l--;
    }

    cout << "\nReverse of string is: " << m << endl;

    getch();
    
}
