#include <bits/stdc++.h>
using namespace std;
#define ll long long

class Segment
{
private:
    vector<int> seg;

public:
    Segment(int n)
    {
        seg.resize(4 * n + 1);
    }

    void build(int idx, int low, int high, vector<int> &a)
    {
        if (low == high)
        {
            seg[idx] = a[low];
            return;
        }
        int mid = low + (high - low) / 2;
        build(2 * idx + 1, low, mid, a);
        build(2 * idx + 2, mid + 1, high, a);
        seg[idx] = min(seg[2 * idx + 1], seg[2 * idx + 2]);
    }

    int query(int idx, int low, int high, int l, int r)
    {
        // partial query
        // l r low high | low high l r
        if (r < low || high < l)
            return INT_MAX;

        // complete query
        // l low high r
        if (l <= low && high <= r)
            return seg[idx];

        int mid = low + (high - low) / 2;
        int left = query(2 * idx + 1, low, mid, l, r);
        int right = query(2 * idx + 2, mid + 1, high, l, r);

        return min(left, right);
    }

    void update(int idx, int low, int high, int i, int val)
    {
        if (low == high)
        {
            seg[idx] = val;
            return;
        }
        int mid = low + (high - low) / 2;
        if (i <= mid)
            update(2 * idx + 1, low, mid, i, val);
        else
            update(2 * idx + 2, mid + 1, high, i, val);

        // after updating again assign seg[idx]
        seg[idx] = min(seg[2 * idx + 1], seg[2 * idx + 2]);
    }
};


class Segmentmax
{

public:
vector<int> seg;
    Segmentmax(int n)
    {
        seg.resize(4 * n + 1);
    }

    void build(int idx, int low, int high, vector<int> &a)
    {
        if (low == high)
        {
            seg[idx] = a[low];
            return;
        }
        int mid = low + (high - low) / 2;
        build(2 * idx + 1, low, mid, a);
        build(2 * idx + 2, mid + 1, high, a);
        seg[idx] = max(seg[2 * idx + 1], seg[2 * idx + 2]);
    }

    int query(int idx, int low, int high, int l, int r)
    {
        //base case
        if(l>r)
        return 0;
        // partial query
        // l r low high | low high l r
        if (r < low || high < l)
            return 0;

        // complete query
        // l low high r
        if (l <= low && high <= r)
            return seg[idx];

        int mid = low + (high - low) / 2;
        int left = query(2 * idx + 1, low, mid, l, r);
        int right = query(2 * idx + 2, mid + 1, high, l, r);

        return max(left, right);
    }

    void update(int idx, int low, int high, int i, int val)
    {
        if (low == high)
        {
            seg[idx] = val;
            return;
        }
        int mid = low + (high - low) / 2;
        if (i <= mid)
            update(2 * idx + 1, low, mid, i, val);
        else
            update(2 * idx + 2, mid + 1, high, i, val);

        // after updating again assign seg[idx]
        seg[idx] = max(seg[2 * idx + 1], seg[2 * idx + 2]);
    }
};

void solve()
{
    int n, m;
    cin >> n;

    vector<int> v1(n);
    for (int i = 0; i < n; i++)
        cin >> v1[i];
    cin >> m;
    vector<int>v2(m);
    for (int i = 0; i < m; i++)
        cin >> v2[i];

    Segmentmax sg1(n);
    Segmentmax sg2(m);

    sg1.build(0, 0, n - 1, v1);
    sg2.build(0, 0, m - 1, v2);
    cout<<"Build of Segment Tree Successfully\n";

    int t;
    cin >> t;
    while (t--)
    {
        int type;
        cin >> type;
        if (type == 1)
        {
            int l1, r1, l2, r2;
            cin >> l1 >> r1 >> l2 >> r2;
            int min1 = sg1.query(0, 0, n - 1, l1, r1);
            int min2 = sg2.query(0, 0, m - 1, l2, r2);

            cout << max(min1, min2) << endl;
        }
        else
        {
            int arrNo, i, val;
            cin >> arrNo >> i >> val;
            if (arrNo == 1)
            {
                sg1.update(0, 0, n - 1, i, val);
                v1[i] = val;
            }
            else
            {
                sg2.update(0, 0, m - 1, i, val);
                v2[i] = val;
            }
        }
    }
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    solve();
    cerr << "Finished in " << (1000 * clock()) / CLOCKS_PER_SEC << "ms" << endl;

    return 0;
}