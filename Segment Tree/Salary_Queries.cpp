#include <bits/stdc++.h>

#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>

using namespace std;
using namespace __gnu_pbds;
#define ll long long
const int N=1e9+7;
typedef pair<ll, ll> pii;
template <class T>
using Tree = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
ll a[200005];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // #ifndef ONLINE_JUDGE
    //     freopen("input.txt", "r", stdin);
    //     freopen("output.txt", "w", stdout);
    // #endif

    ll n, q;
    cin >> n >> q;
    Tree<pii> ost;
    for (ll i = 1; i <= n; i++)
    {
        cin >> a[i];
        ost.insert({a[i], i});
    }
    for (int i = 0; i < q; i++)
    {
        char c;
        cin >> c;
        if (c == '?')
        {
            ll l, r;
            cin >> l >> r;
            int res = ost.order_of_key({r,N}) - ost.order_of_key({l-1,N});
            cout << res << "\n";
        }
        else
        {
            ll k, x;
            cin >> k >> x;
            ost.erase({a[k],k});
            a[k]=x;
            ost.insert({a[k],k});
        }
    }

    return 0;
}