#include<bits/stdc++.h>
using namespace std;

struct Complex{
    private:
    int a,b;
    public:
    // void set_data(int x, int y)
    // {
    //     a=x;
    //     b=y;
    // }
    void set_data(int x, int y);

    void show_data()
    {
        cout<<a<<" "<<b<<endl;
    }

};

void Complex:: set_data(int x, int y)
{
    a=x;
    b=y;
}

int main()
{
    Complex c1;
    c1.set_data(3,4);
    c1.show_data();
    return 0;
}