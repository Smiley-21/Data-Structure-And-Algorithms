#include<bits/stdc++.h>
using namespace std;

// Advantage of friend function 
// 1- When we require to access values from two classes in 
//    single function then friend function is only solution

class B;
class A 
{
    private:
    int a;
    public:
    void set_data(int x)
    {
        a=x;
    }
    friend void fun(A,B);

};

class B
{
    private:
    int b;
    public:
    void set_data(int x)
    {
        b=x;
    }
    friend void fun(A,B);

};

void fun(A obj1, B obj2)
{
    cout<<"Sum is "<<obj1.a+obj2.b<<endl;
}

int main()
{
    A obj1;
    B obj2;
    obj1.set_data(2);
    obj2.set_data(3);
    fun(obj1,obj2);
    return 0;
}