#include <bits/stdc++.h>
using namespace std;

int top = 0;
int n = 2;
int *stack_arr = new int[n];

int isFull()
{
    return top == n ? true : false;
}

void push(int element)
{
    if (isFull())
    {
        n = 2 * n;
        int *stack_arr1 = new int[n];
        for (int i = 0; i < top; i++)
        {
            stack_arr1[i] = stack_arr[i];
        }
        stack_arr = stack_arr1;
        stack_arr[top++] = element;
    }
    else
    {
        stack_arr[top++] = element;
    }
}

int isEmpty()
{
    return top == 0;
}

void pop()
{
    if (isEmpty())
    {
        cout << "Empty\n";
        return;
    }
    else
    {
        top--;
    }
}

int topElement()
{
    return stack_arr[top - 1];
}

void show()
{
    for (int i = top - 1; i >= 0; i--)
    {
        cout << stack_arr[i] << endl;
    }
    cout << "-----------------------";
}

int main()
{

    push(10);
    push(20);
    push(30);
    push(40);
    push(50);
    push(60);
    show();
    pop();
    cout << topElement() << endl;

    return 0;
}