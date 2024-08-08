#include<bits/stdc++.h>
using namespace std;

class A
{
    private:
    int a;
    public:
    A(int k)
    {
        cout<<"First constructor\n";
        a=k;
    }

};

class B:public A{
    private:
    int b;
    public:
    B(int x, int y):A(x){
        
        cout<<"Second constructor\n";
        b=y;
    }
};

int main()
{
    B obj(2,3);
    return 0;
}