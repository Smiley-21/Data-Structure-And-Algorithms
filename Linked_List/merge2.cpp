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
void insertathead(node *&head, int val)
{
    node *n = new node(val);
node *temp = head;
    if (head == NULL)
    {
        n->next = n;
        head = n;
        return;
    }
    
    while (temp->next != head)
    {
        temp = temp->next;
    }
    temp->next = n;
    n->next = head;
    head = n;
}

void display(node *head)
{
    node *temp = head;

    do
    {
        cout << temp->data << " ";
        temp = temp->next;
    } while (temp != head);
}
void insertattail(node *&head, int val)
{if (head == NULL)
    {
        insertathead(head, val);
        return;
    }
     node *n = new node(val);
node *temp = head;
   

    
    
    while (temp->next != head)
    {
        temp = temp->next;
    }
    temp->next = n;
    n->next = head;
}
int main()
{
    node *head = NULL;
    int arr[] = {1, 2, 3, 4};
    for (int i = 0; i < 4; i++)
    {
        insertattail(head, arr[i]);
    }
    display(head);
    insertathead(head, 5);
    cout << endl;
    display(head);

    return 0;
}
