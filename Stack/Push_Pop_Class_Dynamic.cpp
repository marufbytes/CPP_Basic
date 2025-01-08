
#include <bits/stdc++.h>
using namespace std;

class Stack
{
private:
    int top;
    int n;
    int *stack_arr;

public:
    Stack()
    {
        top = 0;
        n = 2;
        stack_arr = new int[n];
    }

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
        cout << "-----------------------\n";
    }
};

int main()
{
    Stack *s = new Stack[5];
    s->push(10);
    s->push(20);
    s->push(30);
    s->push(40);
    s->push(50);
    s->show();

    return 0;
}
