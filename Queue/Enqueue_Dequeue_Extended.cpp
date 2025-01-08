#include <bits/stdc++.h>
using namespace std;

int front = 0;
int rear = 0;
int n = 2;
int *queue_arr = new int[n];

int isFull()
{
    return rear == n;
}

void enqueue(int element)
{
    if (isFull())
    {
        n = 2 * n;
        int *queue_arr1 = new int[n];
        for (int i = front; i < rear; i++)
        {
            queue_arr1[i] = queue_arr[i];
        }  
        queue_arr = queue_arr1;
    }
    queue_arr[rear++] = element;
}

int isEmpty()
{
    return front == rear;
}

void dequeue()
{
    if (isEmpty())
    {
        cout << "Empty\n";
        return;
    }
    front++;
}

int frontElement()
{
    if (isEmpty())
    {
        cout << "Queue is Empty\n";
        return -1;
    }
    return queue_arr[front];
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
        cout << queue_arr[i] << endl;
    }
    cout << "-----------------------" << endl;
}

int main()
{
    enqueue(10);
    enqueue(20);
    enqueue(30);
    enqueue(40);
    enqueue(50);
    enqueue(60);
    show();
    dequeue();
    cout << "Front element: " << frontElement() << endl;
    show();
    return 0;
}
