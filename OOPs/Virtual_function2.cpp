#include<bits/stdc++.h>
using namespace std;

class A
{
    // *_vptr;   // this will create an array containing address of 
              // virtual function and this pointer is passed on 
              // to descendant classes
    public:
     void f1()
    {

    }
  // i.e [f2,f3,f4]
    virtual void f2(){};  // if there is any virtual function in class then
    virtual void f3(){};  // compiler will make a pointer in class A
    virtual void f4(){};
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