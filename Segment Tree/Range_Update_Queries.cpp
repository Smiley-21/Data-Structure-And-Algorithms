// #include <bits/stdc++.h>
// using namespace std;
// #define ll long long

// class Segment
// {
// private:
//     vector<ll> seg, lazy;

// public:
//     Segment(ll n)
//     {
//         seg.resize(4 * n + 1, 0);
//         lazy.resize(4 * n + 1, 0);
//     }

//     void build(ll idx, ll low, ll high, vector<ll> &nums)
//     {
//         if (low == high)
//         {
//             seg[idx] = nums[low];
//             return;
//         }

//         ll mid = low + (high - low) / 2;
//         build(2 * idx + 1, low, mid, nums);
//         build(2 * idx + 2, mid + 1, high, nums);
//         seg[idx] = seg[2 * idx + 1] + seg[2 * idx + 2];
//     }

//     void RangeUpdate(ll idx, ll low, ll high, ll l, ll r, ll val)
//     {
//         if (lazy[idx] != 0)
//         {
//             seg[idx] += (high - low + 1) * lazy[idx];
//             if (low != high)
//             {
//                 lazy[2 * idx + 1] += lazy[idx];
//                 lazy[2 * idx + 2] += lazy[idx];
//             }
//             lazy[idx] = 0;
//         }

//         if (low > high || r < low || high < l)
//             return;

//         if (low >= l && high <= r)
//         {
//             seg[idx] += (high - low + 1) * val;
//             if (low != high)
//             {
//                 lazy[2 * idx + 1] += val;
//                 lazy[2 * idx + 2] += val;
//             }

//             return;
//         }

//         ll mid = low + (high - low) / 2;
//         RangeUpdate(2 * idx + 1, low, mid, l, r, val);
//         RangeUpdate(2 * idx + 2, mid + 1, high, l, r, val);
//         seg[idx] = seg[2 * idx + 1] + seg[2 * idx + 2];
//     }

//     ll querySum(ll idx, ll low, ll high, ll l, ll r)
//     {
//         if (lazy[idx] != 0)
//         {
//             seg[idx] += (high - low + 1) * lazy[idx];
//             if (low != high)
//             {
//                 lazy[2 * idx + 1] += lazy[idx];
//                 lazy[2 * idx + 2] += lazy[idx];
//             }
//             lazy[idx] = 0;
//         }

//         if (high < l || r < low || low > high)
//             return 0;

//         if (low >= l && high <= r)
//         {
//             return seg[idx];
//         }
//         ll mid = low + (high - low) / 2;
//         ll left = querySum(2 * idx + 1, low, mid, l, r);
//         ll right = querySum(2 * idx + 2, mid+1, high, l, r);
//         return left + right;
//     }
// };

// int main()
// {
// // #ifndef ONLINE_JUDGE
// //     freopen("../input.txt", "r", stdin);
// //     freopen("../output.txt", "w", stdout);
// // #endif
//     ll n, q;
//     cin >> n >> q;
//     vector<ll> v(n);
//     for (ll i = 0; i < n; i++)
//         cin >> v[i];
//     Segment sg(n);
//     sg.build(1, 0, n - 1, v);
//     for (ll i = 0; i < q; i++)
//     {
//         ll t;
//         cin >> t;
//         if (t == 1)
//         {
//             ll l, r, u;
//             cin >> l >> r >> u;
//             sg.RangeUpdate(1, 0, n - 1, l - 1, r - 1, u);
//         }
//         else
//         {

//             ll k;
//             cin >> k;
//             ll res = sg.querySum(1, 0, n - 1, k - 1, k - 1);
//             cout << res << endl;
//         }
//     }

//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;
#define ll long long

const int N = 2e5 + 5;
ll a[N + 1];

void update(ll idx, ll val)
{
    for (ll i = idx; i <= N; i += (i & (-i)))
    {
        a[i] += val;
    }
}

ll query(int idx)
{
    ll sum = 0;
    for (int i = idx; i > 0; i -= (i & (-i)))
    {
        sum += a[i];
    }
    return sum;
}

int main()
{

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    ll n, q;
    cin >> n >> q;

    for (int i = 1; i <= n; i++)
    {
        ll x;
        cin >> x;
        update(i, x);
        update(i + 1, -x);
    }

    for (ll i = 0; i < q; i++)
    {
        int t;
        cin >> t;
        if (t == 1)
        {
            ll l, r, val;
            cin >> l >> r >> val;
            update(l, val);
            update(r + 1, -val);
        }
        else
        {
            ll k;
            cin >> k;
            ll res = query(k);
        }
    }
}