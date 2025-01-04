#include <bits/stdc++.h>
using namespace std;

int front = 0, rear = 0;
int n = 8; // Maximum size of the queue
int q[8];

bool isFull()
{
    return (rear - front) == n;
}

bool isEmpty()
{
    return rear == front;
}

void enqueue(int e)
{
    if (isFull())
    {
        cout << "FULL\n";
    }
    else
    {
        q[rear % n] = e;
        rear++;
    }
}

void dequeue()
{
    if (isEmpty())
    {
        cout << "Empty\n";
    }
    else
    {
        front++;
    }
}

int frontElement()
{
    if (!isEmpty())
        return q[front % n];
    else
    {
        cout << "Queue is Empty\n";
        return -1;
    }
}

void show()
{
    if (isEmpty())
    {
        cout << "Queue is Empty\n";
        return;
    }
    for (int i = front; i < rear; i++)
    {
        cout << q[i % n] << endl;
    }
    cout << "-------------\n";
}

int main()
{
    enqueue(10);
    enqueue(20);
    enqueue(30);
    enqueue(40);
    enqueue(50);
    enqueue(60);
    enqueue(70);
    enqueue(80);
    dequeue();
    dequeue();
    show();
    cout << "Front element: " << frontElement() << endl;

    return 0;
}
