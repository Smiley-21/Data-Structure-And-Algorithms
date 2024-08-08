#include<bits/stdc++.h>
using namespace std;

class Complex{
    private:
    int a, b;
    public:
    void set_data(int x, int y)
    {
        a=x;
        b=y;
    }

    void show_data()
    {
        cout<<a<<" "<<b;
    }

    Complex add (Complex c)
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
    c1.set_data(3,4);
    c2.set_data(5,6);
    c3=c1.add(c2);
    // c3=c1+c2;
    c3.show_data();
}