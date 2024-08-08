#include <bits/stdc++.h>
using namespace std;
const int MX = 1e5;
int v[MX+1];

void update(int idx, int val)
{
    for (int i = idx; i <= MX; i += (i & (-i)))
    {
        v[i] += val;
    }
}

int query(int idx)
{
    int sum = 0;
    for (int i = idx; i > 0; i -= (i & (-i)))
    {
        sum += v[i];
    }
    return sum;
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    
    int n;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        int x;
        cin >> x;
        update(i, x);
    }
    // what is lower_bound of index which gives sum till k
    // cout<<query(16)<<endl;
    int k;
    cin >> k;
    int p = log2(n);
    int cur = 0, prevsum = 0;
    for (int i = p; i >= 0; i--)
    {
        if (v[cur + (1 << i)] + prevsum < k)
        {
            cur = cur + (1 << i);
            prevsum += v[cur];
        }
    }
    cout << cur + 1 << endl;
}