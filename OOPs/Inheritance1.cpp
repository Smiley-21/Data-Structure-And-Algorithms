#include<bits/stdc++.h>
using namespace std;

// When to use public inheritance 
// When to use private and protected inheritance 

// class Car
// {
//     private:
//     int gear;
//     public:

//     void incrementGear()
//     {
//         if(gear<5)
//         gear++;
//     }
// };

// class SportsCar:public Car
// {
     
// };

class Array
{
    private:
    int a[10];
    public:
    void insert(int index, int value)
    {
        a[index]=value;
    }
};

class Stack:private Array
{
    int top;
    public:
    void push(int value)
    {
        insert(top,value);
    }

};
int main()
{
    Stack s1;
    s1.push(34);
    // s1.insert(2,34);

    return 0;
}