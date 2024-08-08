#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int N = 2e5 + 1;

vector<ll> tree1(4 * N + 1);
vector<ll> tree2(4 * N + 1);

void build1(ll idx, ll low, ll high, vector<ll> &v, vector<ll>&tree1)
{
    if (low == high)
    {
        tree1[idx] = v[low] + low;
        return;
    }

    ll mid = low + (high - low) / 2;
    build1(2 * idx + 1, low, mid, v,tree1);
    build1(2 * idx + 2, mid + 1, high, v,tree1);
    tree1[idx] = min(tree1[2 * idx + 1], tree1[2 * idx + 2]);
}

void build2(ll idx, ll low, ll high, vector<ll> &v, vector<ll>&tree2)
{
    if (low == high)
    {
        tree2[idx] = v[low] - low;
        return;
    }

    ll mid = low + (high - low) / 2;
    build2(2 * idx + 1, low, mid, v,tree2);
    build2(2 * idx + 2, mid + 1, high, v,tree2);
    tree2[idx] = min(tree2[2 * idx + 1], tree2[2 * idx + 2]);
}

void update1(ll idx, ll low, ll high, ll i, ll val, vector<ll> &tree1)
{
   
    if (low == high)
    {
        tree1[idx] = val + low;
        return;
    }
    ll mid = low + (high - low) / 2;
    if (i <= mid)
    {
        update1(2 * idx + 1, low, mid, i, val, tree1);
    }
    else
        update1(2 * idx + 2, mid + 1, high, i, val, tree1);
    tree1[idx] = min(tree1[2 * idx + 1], tree1[2 * idx + 2]);
}

void update2(ll idx, ll low, ll high, ll i, ll val, vector<ll> &tree2)
{
    
    if (low == high)
    {
        tree2[idx] = val - low;
        return;
    }
    ll mid = low + (high - low) / 2;
    if (i <= mid)
    {
        update2(2 * idx + 1, low, mid, i, val, tree2);
    }
    else
        update2(2 * idx + 2, mid + 1, high, i, val, tree2);
    tree2[idx] = min(tree2[2 * idx + 1], tree2[2 * idx + 2]);
}

ll query(ll idx, ll low, ll high, ll l, ll r, vector<ll>&tree)
{
    if (low > high || high < l || low > r)
        return LLONG_MAX;

    if (low >= l && high <= r)
        return tree[idx];

    ll mid = low + (high - low) / 2;
    ll left = query(2 * idx + 1, low, mid, l, r, tree);
    ll right = query(2 * idx + 2, mid + 1, high, l, r, tree);
    return min(left, right);
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

    build1(1, 0, n - 1, v,tree1);
    build2(1, 0, n - 1, v,tree2);


    for (int i = 0; i < q; i++)
    {
        int t;
        cin >> t;
        if (t == 1)
        {
            ll k, x;
            cin >> k >> x;
            update1(1,0,n-1,k-1,x,tree1);
            update2(1,0,n-1,k-1,x,tree2);
        }
        else
        {
            ll x;
            cin >> x;
            ll left = query(1, 0, n - 1, 0, x - 1, tree2);
            ll right = query(1, 0, n - 1, x - 1, n - 1, tree1);

            ll res = min(left + (x - 1), right - (x - 1));
            cout << res << endl;
        }
    }

    // cout<<"Running\n";
    return 0;
}


