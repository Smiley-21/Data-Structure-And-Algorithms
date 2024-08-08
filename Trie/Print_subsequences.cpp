#include<bits/stdc++.h>
using namespace std;


void sub(string s, string t, vector<string>&res)
{
   if(s.size()==0)
   {
        if(t.size()==0)
        return;
        else
        {
            res.push_back(t);
            return ;
        }
   }
     sub(s.substr(1),t, res);
   sub(s.substr(1),t+s[0], res);
 
}
void print(vector<string>res)
{
    for(auto s:res)
    cout<<s<<" ";
}

int main()
{
    string s;
    cin>>s;
    vector<string>res;
    sub(s,"",res);
    print(res);
    cout<<res.size();

    return 0;
}