#include<bits/stdc++.h>
using namespace std;

int dp[1001][1001];

int main()
{
    int n,q;
    cin>>n>>q;
    for(int i=1;i<=n; i++)
    {
        for(int j=1; j<=n; j++)
        {
            char c;
            cin>>c;
            dp[i][j]=(dp[i-1][j]+dp[i][j-1]-dp[i-1][j-1])+(c=='*');
        }
    }

    for(int i=0; i<q; i++)
    {
        int x1,y1,x2,y2;
        cin>>x1>>y1>>x2>>y2;
        int ans=dp[x2][y2]-dp[x2][y1-1]-dp[x1-1][y2]+dp[x1-1][y1-1];
        cout<<ans<<endl;
    }
    return 0;

}