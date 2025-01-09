#include <bits/stdc++.h>
using namespace std;

#define n 5
int start = -1, rear = -1;
int Queue[n];

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
        cout << Queue[i] << "  ";
    }
    cout << endl;
}

int main(){
    enQueue(10);
    enQueue(20);
    enQueue(30);
    enQueue(40);
    enQueue(50);
    enQueue(60);

    display();

    cout<<deQueue()<<endl;
    
    display();
    
    cout<<deQueue()<<endl;
    cout << deQueue() << endl;
    cout << deQueue() << endl;
    cout << deQueue() << endl;
    cout << deQueue() << endl;
    cout << deQueue() << endl;

    display();

    return 0;
}
