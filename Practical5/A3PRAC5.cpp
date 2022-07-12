#include<iostream.h>
#include<conio.h>
#include<string.h>
#include<stdio.h>

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
