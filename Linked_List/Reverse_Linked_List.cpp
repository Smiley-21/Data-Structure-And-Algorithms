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
//Iterative method
node *reverse(node *&head)
{
    node *prevptr = NULL;
    node *currptr = head;
    node *nextptr;
    while (currptr != NULL)
    {
        nextptr = currptr->next;
        currptr->next = prevptr;

        prevptr = currptr;
        currptr = nextptr;
    }
    return prevptr;
}
//Recurssive
node *recursive(node *&head)
{
    if (head->next == NULL || head == NULL)
    {
        return head;
    }
    node *newhead = reverse(head->next);
    head->next->next = head;
    head->next = NULL;
    return newhead;
}
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
void display(node *head)
{
    node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << "<-";
        temp = temp->next;
    }
    cout << "NULL";
}

int main()
{
    node *head = NULL;
    insertattail(head, 1);
    insertattail(head, 2);
    insertattail(head, 3);
    // insertattail(head,4);
    display(head);
    cout << endl;
    node *newhead = recursive(head);

    display(newhead);
   

    return 0;
}
