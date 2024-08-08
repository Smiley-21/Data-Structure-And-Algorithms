#include<bits/stdc++.h>
using namespace std;

// Destructor is always instance member funtion of a class
// it can never be static 
// no return type
// doesn't take any argument


class Complex 
{
    private:
    int a,b;
    public:

    Complex()
    {
        cout<<"Constructor is called\n";
    }
    ~Complex() // Destructor is here 
    {
        cout<<"Destructor is called\n";

    }

    // Destructor doesn't destroys object
    // It is executed just before destruction of object
    // i.e Destructor is last function to be called 

    // Use of destructor 
    // Suppose you have a class A's object having a pointer pointing to 
    // external resource 

    // and if object has been destroyed then external resource which was only 
    // accessible through object's pointer can't be destryed 
    // so there destructor comes in picture 
    

};

void testfun()
{
    Complex obj;
}

int main()
{
    cout<<"Going to test destructor\n";
    testfun();
    cout<<"Destructor has been executed\n";

    return 0;

}