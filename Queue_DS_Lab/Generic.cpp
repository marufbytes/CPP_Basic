#include <bits/stdc++.h>
using namespace std;

template <typename T>

class Queue_arr
{
private:
    int n;
    int start;
    int rear;
    T *Queue;

public:
    Queue_arr() 
    {
        n = 5;
        start = -1;
        rear = -1;
        Queue = new T[n];
    }

    bool isEmpty()
    {
        return start == -1 || start == rear + 1;
    }

    bool isFull()
    {
        return rear == n - 1;
    }

    void enQueue(T data)
    {
        int num;
        if (isFull())
        {
            printf("\n Queue is Full !\n");
            return;
        }
        if (start == -1)
            start++;
        rear++;
        Queue[rear] = data;
    }

    T deQueue()
    {
        if (isEmpty())
        {
            printf("\n Queue is Empty ! \n");
        }
        T member = Queue[start];
        start = start + 1;
        return member;
    }

    void display()
    {
        if (isEmpty())
        {
            cout << "Empty\n";
            return;
        }
        for (int i = start; i <= rear; i++)
        {
            cout << Queue[i] << "    ";
        }
        cout << endl;
    }
};

int main()
{
    Queue_arr<string> *q = new Queue_arr<string>();

    q->enQueue("Mahin");
    q->enQueue("Ahmed");
    q->enQueue("Maruf");

    q->display();

    q->deQueue();
    q->display();

    return 0;
}

