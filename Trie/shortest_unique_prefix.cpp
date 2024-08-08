#include<bits/stdc++.h>
using namespace std;

#define MAX 256
#define MAXW 500

struct TrieNode
{
    struct TrieNode *child[MAX];
    int freq;
};

struct TrieNode *newTrieNode(void)
{
    struct TrieNode *newNode=new TrieNode;
    newNode->freq=1;
    for(int i=0; i<MAX; i++)
    newNode->child[i]=NULL;

    return newNode;
}

void insert(struct TrieNode *root, string key)
{
    struct TrieNode *hnode=root;
    for(int i=0; i<key.size(); i++)
    {
        int idx=key[i];
        if(!hnode->child[idx])
        hnode->child[idx]=newTrieNode();
        else
        (hnode->child[idx]->freq) ++;
        hnode=hnode->child[idx];
    }
}
void findPrefixUtil(struct TrieNode *root, char prefix[], int idx)
{

    if(root==NULL)
    return ;
    if(root->freq==1)
    {
        prefix[idx]='\0';
        cout<<prefix<<" ";
        return ;
    }

    for(int i=0; i<MAX; i++)
    {
        if(root->child[i]!=NULL)
        {
            prefix[idx]=i;
            findPrefixUtil(root->child[i], prefix,idx+1);
        }
    }
}


void findPrefixes(string arr[], int n)
{
    //Construct a Trie of all words
    struct TrieNode *root=newTrieNode();
    root->freq=0;
    for(int i=0; i<n; i++)
    insert(root, arr[i]);

    char prefix[MAXW];
    findPrefixUtil(root,prefix,0);
}


int main()
{
    string arr[]={"zebra","dog","duck","dove"};
    int n=sizeof(arr)/sizeof(arr[0]);
    findPrefixes(arr,n);
    return 0;
}

