#include <bits/stdc++.h>
using namespace std;
#define ll long long

class Segment
{
private:
    vector<ll> seg, lazy;

public:
    Segment(int n)
    {
        seg.resize(4 * n);
        lazy.resize(4 * n, 0);
    }

    void build(ll idx, ll low, ll high, vector<ll> &nums)
    {
        if (low == high)
        {
            seg[idx] = nums[low];
        }

        ll mid = low + (high - low) / 2;
        build(2 * idx + 1, low, mid, nums);
        build(2 * idx + 2, mid + 1, high, nums);
        seg[idx] = seg[2 * idx + 1] + seg[2 * idx + 2];
    }

    void RangeUdpate(ll idx, ll low, ll high, ll l, ll r, ll val)
    {
        if (lazy[idx] != 0)
        {
            seg[idx] += (high - low + 1) * lazy[idx];
            if (low != high)
            {
                lazy[2 * idx + 1] += lazy[idx];
                lazy[2 * idx + 2] += lazy[idx];
            }
            lazy[idx] = 0;
        }

        if (high < l || low > r || low > high)
            return;

        if (low >= l && high <= r)
        {
            seg[idx] += (high - low + 1) * val;
            if (low != high)
            {
                lazy[2 * idx + 1] += lazy[idx];
                lazy[2 * idx + 2] += lazy[idx];
            }
            return;
        }

        ll mid = low + (high - low) / 2;
        RangeUdpate(2 * idx + 1, low, mid, l, r, val);
        RangeUdpate(2 * idx + 2, mid + 1, high, l, r, val);
        seg[idx] = seg[2 * idx + 1] + seg[2 * idx + 2];
    }

    ll querySum(ll idx, ll low, ll high, ll l, ll r)
    {
        if (lazy[idx] != 0)
        {
            seg[idx] += (high - low + 1) * lazy[idx];
            if (low != high)
            {
                lazy[2 * idx + 1] += lazy[idx];
                lazy[2 * idx + 2] += lazy[idx];
            }
            lazy[idx] = 0;
        }

        if (high < l || low > r || low > high)
            return 0;

        if (low >= l && high <= r)
        {
            return seg[idx];
        }

        ll mid = low + (high - low) / 2;
        ll left = querySum(2 * idx + 1, low, mid, l, r);
        ll right = querySum(2 * idx + 2, mid + 1, high, l, r);
        return left+right;
    }
};

