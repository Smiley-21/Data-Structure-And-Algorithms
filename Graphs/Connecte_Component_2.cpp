/*
Question
 There are N friends numbered from 0 to N-1.
 You have to choose 2 person such that they are not related to each other. 
 You are given information in the form of M pairs
(X,Y) i.e there is an link between friend X and Y.
  Find out the number of ways in which 2 persons from different groups can be chosen.


*/

#include <bits/stdc++.h>
using namespace std;



int n, m;
vector<vector<int>> adj;
vector<bool> vis;
vector<int> component;

int get_comp(int idx)
{
    if (vis[idx])
        return 0;

    vis[idx] = true;
    int ans = 1;
    for (auto i : adj[idx])
    {
        if (!vis[i])
        {
            ans += get_comp(i);
            vis[i] = true;
        }
    }
    return ans;
}

int main()
{
    cin >> n >> m;
    adj = vector<vector<int>>(n);
    vis = vector<bool>(n, 0);
    for (int i = 0; i < m; i++)
    {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    for (int i = 0; i < n; i++)
    {
        if (!vis[i])
        {
            component.push_back(get_comp(i));
        }
    }

    long long ans1 = 0;
    for (auto i : component)
    {
        ans1 += (i * (n - i));
    }
    cout << (ans1 / 2);

    return 0;
}