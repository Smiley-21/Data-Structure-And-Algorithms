//Numeber are coming and we have to tell median after each input
#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <stack>
#include <queue>
using namespace std;

#define vi vector<int>
#define vii vector<int, int>
#define rep(i, a, b) for (int i = 0; i < n; i++)
#define setBits(x) builtin_popcount(x)

priority_queue<int, vi, greater<int>> pqmin;
priority_queue<int, vi> pqmax;
void insert(int x)
{
    if (pqmin.size() == pqmax.size())
    {
        if (pqmax.size() == 0)
        {
            pqmax.push(x);
            return;
        }
        if (x < pqmax.top())
            pqmax.push(x);

        else
        {
            pqmin.push(x);
        }
    }
    else
    {
        //two case available
        // size of maxHeap>size of minHeap
        //size of minHeap >size of maxHeap
        if (pqmax.size() > pqmin.size())
        {
            if (x >= pqmax.top())
            {
                pqmin.push(x);
            }
            else
            {
                int temp = pqmax.top();
                pqmax.pop();
                pqmin.push(temp);
                pqmin.push(x);
            }

            if (x <= pqmin.size())
            {
                pqmax.push(x);
            }
        }
        else
        {
            if (x <= pqmin.top())
            {
                pqmax.push(x);
            }
            else
            {
                int temp = pqmin.top();
                pqmin.pop();
                pqmax.push(temp);
                pqmin.push(x);
            }
        }
    }
}

double findmedian()
{
    if (pqmin.size() == pqmax.size())
    {
        return (double)(pqmin.top() + pqmax.top()) / 2;
    }
    else if (pqmin.size() > pqmax.size())
    {
        return pqmin.top();
    }
    else
    {
        return pqmax.top();
    }
}

signed main()
{
    insert(10);
    cout << findmedian() << endl;
    insert(15);
    cout << findmedian() << endl;
    insert(21);
    cout << findmedian() << endl;
    insert(30);
    cout << findmedian() << endl;
    insert(18);
    cout << findmedian() << endl;
    insert(19);
    cout << findmedian() << endl;

    return 0;
}
