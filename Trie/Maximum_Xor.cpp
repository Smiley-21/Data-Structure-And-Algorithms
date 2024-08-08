#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    Node *links[2];

    Node *get(int bit)
    {
        return links[bit];
    }

    bool iscontain(int bit)
    {
        return links[bit]!=NULL;
    }

    void put(int bit, Node *node)
    {
        links[bit]=node;
    }

};

class Trie{
    private:
    Node *root;
    public:
    Trie(){
        root=new Node();
    }

    void insert(int n)
    {
        Node *node=root;
        for(int i=31; i>=0; i--)
        {
            int bit= (n>>i)&1;
            if(!node->iscontain(bit))
            {
                node->put(bit,new Node());
            }
            node=node->get(bit);
        }
    }

    int maxxor(int n)
    {
        Node *node=root;
        int res=0;
        for(int i=31; i>=0; i--)
        {
            int bit= (n>>i)&1;
            if(node->iscontain(!bit))
            {
                res=res|(1<<i);
                node=node->get(!bit);
            }
            else
            node=node->get(bit);
        }
        return res;
    }
};

class Solution
{
    public:
    int max_xor(int arr[], int n)
    {
        int ans=0;
        Trie obj;
        for(int i=0; i<n; i++)
        obj.insert(arr[i]);

        for(int i=0; i<n; i++)
        ans=max(ans,obj.maxxor(arr[i]));
        return ans;
    }
};

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
         int n;
         cin>>n;

         int a[n];
         for(int i=0; i<n; i++)cin>>a[i];

         Solution ob;
         cout<<ob.max_xor(a,n)<<endl;
    }

}
