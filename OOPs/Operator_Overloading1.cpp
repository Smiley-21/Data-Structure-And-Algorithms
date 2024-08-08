#include<bits/stdc++.h>
using namespace std;

class Complex{
    private:
    int a, b;
    public:
    void setData(int x, int y)
    {
        a=x;
        b=y;
    }

    void showData()
    {
        cout<<a<<" "<<b;
    }

    // Complex add(Complex c)
    // {
    //     Complex res;
    //     res.a=a+c.a;
    //     res.b=b+c.b;

    //     return res;
    // }

    Complex operator +(Complex c)
    {
        Complex res;
        res.a=a+c.a;
        res.b=b+c.b;

        return res;
    }
};

int main()
{
    Complex c1,c2,c3;
    c1.setData(3,4);
    c2.setData(5,6);
    // c3=c1+c2;
    // c3=c1.add(c2);
    // c3=c1.operator+(c2); // this is also working

    // above can be written as 
    c3=c1+c2;


    c3.showData();
    return 0;
}