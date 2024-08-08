#include<bits/stdc++.h>
using namespace std;

class Person
{
    public:
    Person(int x)
    {
        cout<<"Person Parameterized constructor is called\n";
    }

    Person()
    {
        cout<<"Person constructor is called\n";
    }
};

class Faculty:virtual public Person
{
    public:
    Faculty(int x):Person(x)
    {
        cout<<"Faculty constructor is called\n";
    }
};

class Student:virtual public Person
{
    public:
    Student(int x):Person(x)
    {
        cout<<"Student constructor is called\n";
    }
};

class TA:public Faculty, public Student
{
    public:
    // TA(int x):Student(x), Faculty(x)  // Here if we are not mentioning
    //                                   // which constructor to be called
    //                                   // then by default default constructor is called

    // {
    //     cout<<"TA constructor is called\n";
    // }
    TA(int x):Student(x), Faculty(x), Person(x)
    {
        cout<<"TA's Constructor is called\n";
    }
};
int main()
{

    TA ta1(30);
    return 0;
}

