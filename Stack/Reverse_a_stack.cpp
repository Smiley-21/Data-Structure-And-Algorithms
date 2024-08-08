#include<iostream>
#include<stack>
using namespace std;
void insertatbottom(stack<int>&st, int ele){
    if(st.empty()){
        st.push(ele) ;
        return ;
    }
    int topele=st.top();
    st.pop();
    insertatbottom(st,ele);
    st.push(topele);
}

void reverse(stack <int> &st){
    if(st.empty()){
        return ;
    }
    int ele=st.top();
    st.pop();
    reverse(st);
    insertatbottom(st,ele);
}
void display(stack<int>s){
    while(!s.empty()){
        cout<<s.top()<<" ";
        s.pop();
        s.top()--;
    }
}

int main(){
    stack<int>st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    // while(!st.empty()){
    //     cout<<st.top()<<" ";
    //     st.pop();
    // }
    
    reverse(st);
    while(!st.empty()){
        cout<<st.top()<<" ";
        st.pop();
    }
    


    return 0;
}
