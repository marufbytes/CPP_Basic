#include <bits/stdc++.h>
using namespace std;

template <typename T>

class Stack
{
private:
    int top;
    int n;
    T *stack_arr;

public:
    Stack(int n)
    {
        top = 0;
        this->n = n;
        stack_arr = new T[n];
    }

    int isFull()
    {
        return top == n ? true : false;
    }

    void push(T element)
    {
        if (isFull())
        {
            n = 2 * n;
            T *stack_arr1 = new T[n];
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

    Stack<string> *s = new Stack<string>(5);

    s->push("Mahin");
    s->push("Ahmed");
    s->push("Maruf");
    s->show();

    return 0;
}