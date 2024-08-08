#include<bits/stdc++.h>
using namespace std;

class Car
{
    public:
    void shiftGear()
    {
        cout<<"Car class \n";
    }

    void f2()
    {

    }
};

class SportsCar:public Car
{
    public:
    void shiftGear()
    {
         cout<<"SportsCar class \n";
    }
};

int main()
{
    SportsCar obj;
    obj.shiftGear();
    obj.shiftGear();

    return 0;
}