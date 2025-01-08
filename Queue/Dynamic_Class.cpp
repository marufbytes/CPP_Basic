#include <bits/stdc++.h>
using namespace std;

class Queue
{

private:
    int front;
    int rear;
    int Max;
    int *queue_arr;

public:
    Queue()
    {
        front = 0;
        rear = 0;
        queue_arr = new int[Max];
    }

    int isFull()
    {
        return rear == Max ? true : false;
    }
    int isEmpty()
    {
        return rear == 0 ? true : false;
    }

    int enqueue(int elements)
    {
        if (isFull())
        {
            Max = 2 * Max;
            int *queue_arr1 = new int[Max];
            for (int i = 0; i < rear; i++)
            {
                queue_arr1[i] = queue_arr[i];
            }
            queue_arr = queue_arr1;
            queue_arr[rear++] = elements;
        }
        queue_arr[rear++] = elements;
    }

    int dequeue()
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
        if (isEmpty())
        {
            cout << "Queue is Empty\n";
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
};

int main()
{
    Queue *q = new Queue [5];
    q->enqueue(10);
    q->enqueue(20);
    q->enqueue(30);
    q->enqueue(40);
    q->enqueue(50);
    q->enqueue(60);
    q->show();
    q->dequeue();
    cout << "Front element: " << q->frontElement() << endl;
    q->show();
    return 0;
}
