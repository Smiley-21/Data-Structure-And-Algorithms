#include <bits/stdc++.h>
using namespace std;

struct Queue
{
    int data, front, rear, capacity;
    int *queue;

    Queue(int val)
    {
        front = rear = 0;
        data = val;
        queue = new int;
    }
    ~Queue() { delete[] queue; }

    void enqueue(int a)
    {
        if (capacity == rear)
        {
            cout << "Queue is full";
            return;
        }
        else
        {
            queue[rear] = a;
            rear++;
        }
        return;
    }
    void dequeue()
    {
        if (front == rear)
        {
            cout << "Queue is empty";
            return;
        }
        else
        {
            for (int i = 0; i < rear - 1; i++)
            {
                queue[i] = queue[i + 1];
            }
            rear--;
        }
        return;
    }
    void displayqueue()
    {
        if (front == rear)
        {
            return;
        }
        for (int i = front; i < rear; i++)
        {
            cout << queue[i] << " ";
        }
    }
    void enquefront()
    {
        if (front == rear)
        {
            cout << "Queue is empty";
            return;
        }
        else
        {
            cout << queue[front];
            front--;
        }
    }
};

int main()
{
    Queue q(4);
    q.displayqueue();
    cout << endl;
    q.enqueue(20);
    q.enqueue(30);
    q.enqueue(40);
    q.enqueue(50);
    q.displayqueue();
    cout << endl;
    q.enqueue(60);
    q.displayqueue();
    cout << endl;
    q.dequeue();
    q.dequeue();
    q.displayqueue();
    cout << endl;
    q.enquefront();

    return 0;
}
