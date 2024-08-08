#include<bits/stdc++.h>
using namespace std;

class A
{
    public:
    A()
    {
        cout<<"A's constructor is called\n";
    }

    ~A()
    {
        cout<<"A's Destructor is called\n";
    }
};

class B
{
    public:
    B()
    {
        cout<<"B's constructor is called\n";
    }

    ~B()
    {
        cout<<"B's Destructor is called\n";
    }
};

class C:public A,public B
{
    public:
    C()
    {
        cout<<"C's constructor is called\n";
    }

    ~C()
    {
        cout<<"C's Desctructor is called\n";
    }
};

int main()
{
    C c;
    

    return 0;
}