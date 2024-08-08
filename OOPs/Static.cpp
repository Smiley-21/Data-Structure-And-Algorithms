#include<bits/stdc++.h>
using namespace std;

void fun()
{
    static int x;
    // this has value of 0 assigned 
    // memory is assigned instantly at start of program 
    // memory allocated to x will not be destroyed till program ends

    int y;

    //garbage value before initialization
    //destroys after function ends it's execution


}

class Account{
    private:
    int balance; // instance member variable
    static float roi; // static member variable or class variable
     // no memory is allocated

    public:
    void setBalance(int b)
    {
        balance=b;
    }
};

float Account::roi=3.5f; // only after writing this memory is allocated 

int main()
{
    Account a1; // at this stage only 1 variable will be there i.e balance
                // roi will not be part of a1 object
}