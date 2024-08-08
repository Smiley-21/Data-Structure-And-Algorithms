#include <bits/stdc++.h>
using namespace std;
#define ll long long


class Node
{
    public:
    ll sum , pref ;
    Node(ll s, ll p) : sum(s), pref(p){}
    Node(ll x=0):sum(x),pref(max(0ll,x)){}
    friend Node operator+(const Node &a, const Node &b)
    {
        return Node(a.sum + b.sum, max(a.pref, a.sum + b.pref));
    }
};

Node seg[1 << 20];

void build(ll idx, ll low, ll high, vector<ll> &v)
{
    if (low == high)
    {
        seg[idx] = Node(v[low]);
        return;
    }
    ll mid = low + (high - low) / 2;
    build(2 * idx + 1, low, mid, v);
    build(2 * idx + 2, mid + 1, high, v);
    seg[idx] = seg[2 * idx + 1] + seg[2 * idx + 2];
}

Node querySum(ll idx, ll low, ll high, ll l, ll r)
{
    if (low > high || high < l || r < low)
        return Node(0);
    if (low >= l && high <= r)
        return seg[idx];
    ll mid = low + (high - low) / 2;
    Node left = querySum(2 * idx + 1, low, mid, l, r);
    Node right = querySum(2 * idx + 2, mid + 1, high, l, r);
    return left + right;
}

void update(ll idx, ll low, ll high, ll i, ll val)
{
    if (low == high)
    {
        seg[idx] = Node(val);
        return;
    }
    ll mid = low + (high - low) / 2;
    if (i <= mid)
    {
        update(2 * idx + 1, low, mid, i, val);
    }
    else
        update(2 * idx + 2, mid + 1, high, i, val);
    seg[idx] = seg[2 * idx + 1] + seg[2 * idx + 2];
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n, q;
    cin >> n >> q;
    vector<ll> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];

    build(1, 0, n - 1, v);

    for (int i = 0; i < q; i++)
    {
        int t;
        cin >> t;
        if (t == 1)
        {
            ll k, u;
            cin >> k >> u;
            update(1, 0, n - 1, k - 1, u);
        }
        else
        {
            ll a, b;
            cin >> a >> b;
            Node res = querySum(1, 0, n - 1, a - 1, b - 1);
            cout << res.pref << "\n";
        }
    }

    return 0;
}