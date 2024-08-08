#include<bits/stdc++.h>
using namespace std;

class A
{
    public:
    void f1()
    {

    }

    void f2()
    {

    }
};

class B:public A
{
    public:
    void f1() // Method overriding
    {

    }

    void f2(int x)  // Method Hiding 
    {               // all this should be defined in same class then only 
                    // method overriding 

    }
};

int main()
{
    B obj;
    obj.f1();
    // obj.f2(); // Error
    obj.f2(4);
}