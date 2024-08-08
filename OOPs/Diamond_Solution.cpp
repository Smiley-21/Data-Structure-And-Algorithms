#include<bits/stdc++.h>
using namespace std;

class A
{
    public:
    int x;
    A()
    {
        cout<<"Default constructor of A \n";
        x=10;
    }
};

class B: virtual public A
{
    public:
    B()
    {
        cout<<"Default constructor of B \n";
    }
};

class C:virtual public  A
{
    public:
    C()
    {
        cout<<"Default constructor of C\n";
    }
};

class D:public B, public C
{
    public:
    D()
    {
        cout<<"Default constructor of D \n";
    }
};


int main()
{
    D d;
    // d.B::x=100;
    // cout<<d.C::x<<endl;
    // cout<<d.B::x<<endl; this will give two value of x instead of single x
                            // therefore with use of virtual keyword it is reduced to single
    
    d.B::x=200;
    cout<<d.C::x<<endl;



    return 0;
}