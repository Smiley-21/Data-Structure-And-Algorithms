#include<bits/stdc++.h>
using namespace std;
#define ll long long

class Segment{
    private:
    vector<ll>seg;
    public:
    Segment(ll n)
    {
        seg.resize(4*n+1);
    }

    void build(ll idx, ll low, ll high, vector<ll>&v)
    {
        if(low==high)
        {
            seg[idx]=v[low];
            return ;
        }
        ll mid=low+(high-low)/2;
        build(2*idx+1,low,mid,v);
        build(2*idx+2,mid+1,high,v);
        seg[idx]=max(seg[2*idx+1],seg[2*idx+2]);
    }

    ll querymax(ll idx , ll low, ll high, ll l, ll r)
    {
        if(low>high || high<l || r<low || l>r)
        return -1;

        if(low>=l && high<=r)
        return seg[idx];

        ll mid=low+(high-low)/2;
        ll left=querymax(2*idx+1,low,mid,l,r);
        ll right=querymax(2*idx+2,mid+1,high,l,r);
        return max(left,right);

    }
    ll search(ll idx, ll l, ll r,ll val)
    {
        if(l==r)
        return l;
        ll mid=l+(r-l)/2;
        if(seg[2*idx+1]>=val)
        return search(2*idx+1,l,mid,val);
        else
        return search(2*idx+2,mid+1,r,val);
    }

    void update(ll idx, ll low, ll high, ll i ,ll val)
    {
        if(low==high)
        {
            seg[idx]-=val;
            return;
        }

        ll mid=low+(high-low)/2;
        if(i<=mid)
        {
            update(2*idx+1,low,mid,i,val);
        }
        else 
        {
            update(2*idx+2,mid+1,high,i,val);
        }
        seg[idx]=max(seg[2*idx+1],seg[2*idx+2]);
    }

};




int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
// #ifndef ONLINE_JUDGE
//     freopen("input.txt", "r", stdin);
//     freopen("output.txt", "w", stdout);
// #endif
    ll n,m;
    cin>>n>>m;
    vector<ll>v(n);
    for(ll i=0; i<n; i++)
    cin>>v[i];

    Segment sg(n);
   
    sg.build(1,0,n-1,v);
   

    for(ll i=0; i<m; i++)
    {
        ll k;
        cin>>k;
        ll res=sg.querymax(1,0,n-1,0,n-1);
        if(res<k)
        {
            cout<<0<<" ";
            continue;
        }
        else
        {
            ll x=sg.search(1,0,n-1,k);
            sg.update(1,0,n-1,x,k);
            cout<<x+1<<" ";
        }
    }
   
    return 0;
}