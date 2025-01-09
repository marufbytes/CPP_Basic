#include <bits/stdc++.h>
using namespace std;

class Queue_Class
{

private:
    int n;
    int start;
    int rear;
    int *Queue;

public:
    Queue_Class()
    {
        n = 5;
        start = -1;
        rear = -1;
        Queue = new int[n];
    }

    bool isEmpty()
    {
        return start == -1 || start == rear + 1;
    }

    bool isFull()
    {
        return rear == n - 1;
    }

    void enQueue(int data)
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

    int deQueue()
    {
        if (isEmpty())
        {
            printf("\n Queue is Empty ! \n");
            return 0;
        }
        int member = Queue[start];
        start = start + 1;
        return member;
    }

    void display()
    {
        if (start == -1 || start == rear + 1)
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
    Queue_Class s;
    s.enQueue(10);
    s.enQueue(20);
    s.enQueue(30);
    s.enQueue(40);
    s.enQueue(50);
    s.enQueue(60);

    s.display();

    cout << s.deQueue() << endl;

    s.display();

    cout << s.deQueue() << endl;

    s.display();

    return 0;
}
