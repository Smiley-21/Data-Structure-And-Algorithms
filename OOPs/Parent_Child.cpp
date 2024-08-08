
#include <bits/stdc++.h>
using namespace std;

class A
{

public:
    int a, b;
    A()
    {
        cout << "Constructor of A is called\n";
    }
    void setData(int x, int y)
    {
        a = x;
        b = y;
    }
};

class B : public A
{
public:
    B()
    {
        cout << "Constructor of B is called\n";
    }
    void changeData(int x, int y)
    {
        a = x;
        b = y;
    }
};

int main()
{
    A obj;
    B obj;

    return 0;
}