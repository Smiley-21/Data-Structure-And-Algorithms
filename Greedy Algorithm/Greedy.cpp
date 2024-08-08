//You are given an array of Denominations and a value X. You need to find the minimum number of coins required to make value X.
//We have infinite value of coins
#include <bits/stdc++.h>
using namespace std;
#define vi vector<int>
#define pii pair<int, int>
#define vii vector<int, int>
#define rep(i, a, b) for (int i = a; i < b; i++)
#define ff first

signed main()
{
    int n;
    cin >> n;
    vi a(n);
    rep(i, 0, n)
    {
        cin >> a[i];
    }
    int X;
    cin >> X;
    sort(a.begin(), a.end(), greater<int>());
    int ans = 0;
    rep(i, 0, n)
    {
        ans += X / a[i];
        X -= X / a[i] * a[i];
    }

    cout << ans << endl;

    return 0;
}
