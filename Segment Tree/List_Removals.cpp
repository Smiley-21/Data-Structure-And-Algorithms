#include<bits/stdc++.h>
using namespace std;
// #include<ext/pb_ds/assoc_container.hpp>
// using namespace __gnu_pbds;
#define ll long long

template<class T> using Tree=tree<T,null_type,less<T>,rb_tree_tag,tree_order_statistics_node_update>;


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    Tree<int>ist;
    vector<int>v(n);
    for(int i=0; i<n; i++)
    {
        ist.insert(i);
        cin>>v[i];
    }

    for(int i=0; i<n; i++)
    {
        int idx;
        cin>>idx;
        idx--;
        int pos=*ist.find_by_order(idx);
        ist.erase(pos);
        cout<<v[pos]<<" ";
    }
    
    
    return 0;
}