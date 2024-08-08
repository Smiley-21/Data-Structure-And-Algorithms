#include<bits/stdc++.h>
using namespace std;

// Constructor can never be static 
class Complex {
    private:
    int a,b;
    public:
    Complex()
    {
        cout<<" Default Constructor is executed\n"; // as soon as object is created 
                                           // constructor is created
    }
    Complex (int x, int y)
    {
        a=x;
        b=y;
    }

    // Complex (Complex c)
    // {
    //     a=c.a;
    // }

    // Whenever c is passed as argument it again doesn't have been initialized
    // that why again calls to initialize which keep on calling again and again 
    // and remain in the loop .....
    // Therefore should be avoided and therefore is compiled time error
    // to avoid this c should be passed as reference 
    Complex (Complex &c)
    {
        a=c.a;
        b=c.b;
    }
};

int main()
{
    Complex c1;

    Complex c2(3,4);
    // Also can be written as 
    Complex c3=Complex(6,7);

    // No error
    Complex c4(c1);
    // whenever there is no constructor then default constructors is called
    // Similary if there is no copy constructor defined then 
    // also  default copy constructor is available

    return 0;
}