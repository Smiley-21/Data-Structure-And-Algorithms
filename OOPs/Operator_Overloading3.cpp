#include<bits/stdc++.h>
using namespace std;

class Integer
{
    private:
    int x;
    public:
    
    void setData(int a)
    {
        x=a;
    }

    void showData()
    {
        cout<<"x="<<x<<endl;
    }

    Integer operator ++()
    {
        Integer res;
        res.x=x+1;
        return res;
    }

    Integer operator ++(int)
    {
        Integer res;
        res.x=x++;
        return res;
    }
};


int main()
{
    Integer i1,i2,i3,i4;
    i1.setData(3);
    i1.showData();
    i2=++i1;
    i2.showData();
    i3.setData(10);
    i4=i3++;
    i3.showData();
    

    return 0;
}