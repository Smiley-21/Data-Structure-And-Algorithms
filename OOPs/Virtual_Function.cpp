#include<bits/stdc++.h>
using namespace std;

class A
{
    public:
     void f1()
    {

    }
};

class B:public A
{
    public:
    void f1()  // function overriding
    {

    }
};

int main()
{
    A *p,o1;
    B o2;
    p=&o2;
    p->f1();  // This will run f1 of A
    // Pointer  know which function to call at compile time 
    //i.e is what's the type of pointer therefore calls f1 of A

    return 0;
}