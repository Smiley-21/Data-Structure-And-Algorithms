#include<bits/stdc++.h>
using namespace std;

const int a=26;
struct TreeNode
{
    struct TreeNode *children[a];
    bool isEndofWord;
};

struct TreeNode *getNode(void)
{
    struct TreeNode *pnode=new TreeNode;
    pnode->isEndofWord=false;

    for(int i=0; i<a; i++)
    {
        pnode->children[i]=NULL;
    }
    return pnode;
}

void insert(struct TreeNode *root, string key)
{
    struct TreeNode *hnode=root;
    for(int i=0; i<key.length(); i++)
    {
        int idx=key[i]-'a';
        if(!hnode->children[idx])
        {
            hnode->children[idx]=getNode();
            hnode=hnode->children[idx];
        }
    }
    hnode->isEndofWord=true;
}



bool search(struct TreeNode *root, string key)
{
    struct TreeNode *hnode=root;
    for(int i=0; i<key.length(); i++)
    {
        int idx=key[i]-'a';
        if(!hnode->children[idx])
        return false;
        hnode=hnode->children[idx];
    }
    return hnode->isEndofWord;

}

int main()
{
    string keys[]={"the", "a","there","answer","any","by","bye","their"};
    int n=sizeof(keys)/sizeof(keys[0]);

    struct TreeNode *root=getNode();
    // Construct Trie
    for(int i=0; i<n; i++)
    insert(root,keys[i]);

    search(root,"th")? cout<<"Yes":cout<<"No";

}

