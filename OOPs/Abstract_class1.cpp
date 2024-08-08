#include<bits/stdc++.h>
using namespace std;

 class Person 
{
    public:
   virtual void fun()=0;  // do nothing function i.e virtual function 
};

class Student:public Person
{
    public:
    void fun()
    {
                         // In all descendant class we have to define virtual fun
                         // of base class or declare same virtual function in 
                         // descendant classes
    }
    void fun2()
    {
        cout<<"Running in Student class\n";
    }
};


int main()
{
    Student obj;

    return 0;
}