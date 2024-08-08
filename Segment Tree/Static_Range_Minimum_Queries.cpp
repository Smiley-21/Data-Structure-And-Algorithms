#include<bits/stdc++.h>
using namespace std;
#define ll long long

ll n, q;
vector<ll>v;

class Segment{
    private:
    vector<ll>seg;
    public:
    Segment(ll n)
    {
        seg.resize(4*(n+1));

    }

    void build(ll idx, ll low , ll high)
    {
        if(low==high)
        {
            seg[idx]=v[low];
            return ;
        }

        ll mid=low+(high-low)/2;
        build(2*idx,low,mid);
        build(2*idx+1,mid+1,high);
        seg[idx]=min(seg[2*idx],seg[2*idx+1]);
    }

    ll query(ll idx, ll low, ll high, ll l, ll r)
    {
        if(l>r)
        return INT_MAX;

        if(high<l || low>r)
        return INT_MAX;

        if(low>=l && high<=r)
        {
            return seg[idx];
        }

        ll mid=low+(high-low)/2;
        ll left=query(2*idx, low, mid,l,r);
        ll right=query(2*idx+1, mid+1, high, l,r);
        return min(left,right);
    }
};


int main()
{
    cin>>n>>q;
    v.resize(n+1);
    for(int i=1; i<=n; i++)
    cin>>v[i];

    Segment sg1(n);
    sg1.build(1 ,1,n);
    for(int i=0; i<q; i++)
    {
        ll left,right;
        cin>>left>>right;
        ll x=sg1.query(1,1,n,left,right);
        cout<<x<<endl;
    }
    return 0;

}