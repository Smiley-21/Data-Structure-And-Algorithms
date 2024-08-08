#include<bits/stdc++.h>
using namespace std;


// Friend function is not a member function of 
// a class to which it is a friend
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

    // friend void fun(); // requires passing object to specify which object 
                       // is trying to access this 
        friend void fun(Complex c);
    
};

// void fun()
// {
//     // cout<<"Sum is : "<<(a+b); // Cannot be accessed directly 
// }

void fun(Complex c)
{
    cout<<"Sum is "<<(c.a+c.b);
}

int main()
{

    Complex c1;
    c1.setData(10,4);
    // c1.fun()   // this is invalid as fun is not a member function

    fun(c1);
}