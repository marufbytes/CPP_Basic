#include <bits/stdc++.h>
using namespace std;

template <typename T>
class Queue
{
private:
    int front, rear, Max;
    T *queue_arr;

public:
    Queue(int size)
    {
        front = 0;
        rear = 0;
        Max = size;
        queue_arr = new T[Max];
    }

    bool isFull()
    {
        return rear == Max;
    }

    bool isEmpty()
    {
        return rear == front;
    }

    void enqueue(T element)
    {
        if (isFull())
        {
            Max = 2 * Max;
            T *queue_arr1 = new T[Max];
            for (int i = 0; i < rear - front; i++)
            {
                queue_arr1[i] = queue_arr[i + front];
            }

            queue_arr = queue_arr1;
            queue_arr[rear++] = element;
        }
        queue_arr[rear++] = element;
    }

    void dequeue()
    {
        if (isEmpty())
        {
            cout << "Queue is Empty\n";
            return;
        }
        front++;
    }

    T frontElement()
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
    Queue<string> *q = new Queue<string>(5);

    q->enqueue("Mahin");
    q->enqueue("Ahmed");
    q->enqueue("Maruf");
    q->show();
    q->dequeue();
    cout << "Front Element: " << q->frontElement() << endl;
    q->show();

    return 0;
}
