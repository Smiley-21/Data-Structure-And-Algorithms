#include<bits/stdc++.h>
using namespace std;

class Complex
{
    private:
    int a, b;
    public:
    void set_data(int x, int y)
    {
        a=x;
        b=y;
    }

    void showdata()
    {
        cout<<a<<" + i"<<b<<endl;
    }

    // Complex operator +(Complex c)
    // {
    //     Complex res;
    //     res.a=a+c.a;
    //     res.b=b+c.b;
    //     return res;
    // }

    friend Complex operator +(Complex ,Complex);
};

Complex operator +(Complex c1, Complex c2)
{
    Complex temp;
    temp.a=c1.a+c2.a;
    temp.b=c1.b+c2.b;

    return temp;
}

int main()
{
    Complex c1, c2,c3;
    c1.set_data(3,4);
    c2.set_data(5,6);
    // c3=c1+c2;

    c3=c1+c2;

    c3.showdata();

    return 0;
}