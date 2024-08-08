#include<bits/stdc++.h>
using namespace std;

class Complex
{
    private:
    int a,b;
    public:

    void setData(int x, int y)
    {
        a=x;
        b=y;
    }

    void showData()
    {
        cout<<a<<" "<<b<<endl;
    }

    Complex operator -(Complex c)
    {
        Complex res;
        res.a=a-c.a;
        res.b=b-c.b;
        return res;
    }

    Complex operator -()
    {
        Complex res;
        res.a=-a;
        res.b=-b;

        return res;
    }
};


int main()
{
    Complex c1, c2,c3;
    c1.setData(3,4);
    c2.setData(5,9);
    c2=-c1;
    c3=c1-c2;
    c3.showData();
    c2.showData();

    return 0;
}