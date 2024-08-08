#include <iostream>
using namespace std;
class node
{
public:
    int data;
    node *next;
    node(int val)
    {
        data = val;
        next = NULL;
    }
};
//InsertAttail
void insertattail(node *&head, int val)
{

    node *n = new node(val);
    {
        if (head == NULL)
        {
            head = n;
            return;
        }
        node *temp = head;
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = n;
    }

}
//insertathead
void insertathead(node* &head,int val){
    node* n=new node(val);

    n->next=head;
    head=n;
}
void display(node* head){
    node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<"<-";
        temp=temp->next;
    }
    cout<<"NULL";
}
int main(){
    node *head=NULL;
    insertattail(head,1);
    insertattail(head,2);
    insertattail(head,3);
    // insertattail(head,4);
    display(head);
    cout<<endl;
    insertathead(head,0);
    insertathead(head,6);
    insertathead(head,7);
    display(head);

    return 0;
}
