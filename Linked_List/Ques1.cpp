//Put even elements after odd elements in linked list
//1 2 3 4 5 6
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
void evenodd(node* &head){
    node* temp=head;
    node* Odd=head;
    node* Even=head->next;
}


int main()
{

    return 0;
}
