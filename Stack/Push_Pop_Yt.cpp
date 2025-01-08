#include <bits/stdc++.h>
using namespace std;

#define Max 4

int stack_arr[Max];
int top = -1;

// push data
void push(int data)
{
    if (top == Max - 1)
    {
        cout << "Stack overflow! Cannot push " << data << endl;
        return;
    }
    top = top + 1;
    stack_arr[top] = data;
    cout << data << " pushed onto stack." << endl;
}

// delete elements
void pop()
{
    if (top == -1)
    {
        cout << "Stack underflow! Nothing to pop." << endl;
        return;
    }
    cout << stack_arr[top] << " popped from stack." << endl;
    top = top - 1;
}

// top element
void peek()
{
    if (top == -1)
    {
        cout << "Stack is empty! Nothing to peek." << endl;
        return;
    }
    cout << "Top element: " << stack_arr[top] << endl;
}

// print
void display()
{
    if (top == -1)
    {
        cout << "Stack is empty!" << endl;
        return;
    }
    cout << "Stack elements: ";
    for (int i = 0; i <= top; i++)
    {
        cout << stack_arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    push(1);
    push(2);
    push(3);
    push(4);
    push(5);

    display();

    pop();
    pop();

    display();

    peek();

    pop();
    pop();
    pop();

    return 0;
}