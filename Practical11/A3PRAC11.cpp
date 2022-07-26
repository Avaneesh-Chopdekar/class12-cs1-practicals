#include<iostream.h>
#include<conio.h>

/*
    Aim: Write a program in C++ that initializes a static class 
    with no parameters as a default constructor. The program must
    print the message "Object is born" during initialization.
    It should display the message "Now X is alive" when the first
    member function ratio x is called. The program must print
    "Object Dies" when the class destructor is called for the
    object when it reaches the end of its scope. 
*/

class ratio{

    public:

    ratio()
    {
        cout << "Object is born" << endl;
    }
    
    ~ratio()
    {
        cout << "Object Dies" << endl;
    }

};

void main()
{
    clrscr();

    {
        ratio x;
        cout << "Now X is alive" << endl;
    }

    getch();
}
