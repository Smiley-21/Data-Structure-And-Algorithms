/* You are  given n files with their computation times in an array 

Operation: Choose / take any two files , add their computation times and append it to  the list of computation times and append it to the list 
of computation times. {Cost= Sum of Computation time }
Do until we are left with only one file in the array . We have to do this operation such that we get minimum cost finally */
#include <bits/stdc++.h>
using namespace std;
#define vi vector<int>
#define pii pair<int, int>

#define vii vector<pair<int, int>>
#define rep(i, a, b) for (int i = a; i < b; i++)

signed main()
{
    int n;
    cin >> n;
    vi a(n);
    rep(i, 0, n)
    {
        cin >> a[i];
    }
    priority_queue<int, vector<int>, greater<int>> minheap;
    rep(i, 0, n)
    {
        minheap.push(a[i]);
    }
    int ans = 0;
    while (minheap.size() > 1)
    {
        int e1 = minheap.top();
        minheap.pop();
        int e2 = minheap.top();
        minheap.pop();
        int sum = e1 + e2;
        ans += sum;
        minheap.push(sum);
    }
    cout << ans << endl;

    return 0;
}
