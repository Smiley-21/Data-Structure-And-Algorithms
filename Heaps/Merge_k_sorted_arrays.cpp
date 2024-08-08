#include <bits/stdc++.h>
#define rep(i, a, b) for (int i = a; i < b; i++)
#define pii pair<int, int>
#define vii vector<int, int>
#define vi vector<int>
#define ff first
#define ss second

using namespace std;

signed main()
{
    int k;
    cin >> k;

    vector<vector<int>> a(k);

    rep(i, 0, k)
    {
        int size;
        cin >> size;
        a[i] = vector<int>(size);
        rep(j, 0, size)
        {
            cin >> a[i][j];
        }
    }

    vector<int> idx(k, 0);
    priority_queue<pii, vector<pii>, greater<pii>> pqmin;
    rep(i, 0, k)
    {
        pqmin.push({a[i][0], i});
    }

    vi ans;
    while (!pqmin.empty())
    {
        pii x = pqmin.top();
        pqmin.pop();

        ans.push_back(x.ff);
        if (idx[x.ss] + 1 < a[x.ss].size())
        {
            pii p;
            p.ff = a[x.ss][idx[x.ss] + 1];
            p.ss = x.ss;
            pqmin.push(p);
        }
        idx[x.ss] += 1;
    }
    rep(i, 0, ans.size())
    {
        cout << ans[i] << " ";
    }
}
