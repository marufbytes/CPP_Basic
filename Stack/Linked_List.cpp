#include <bits/stdc++.h>
using namespace std;

template <typename T>

struct Node
{
    T data;
    Node<T> *link;

    Node(T data)
    {
        this->data = data;
        this->link = NULL;
    }
};

template <typename T>

class Stack
{
private:
    Node<T> *top;

public:
    Stack()
    {
        top = NULL;
    }

    int isEmpty()
    {
        return top == NULL?true:false;
    }

    void push(T e)
    {
        Node<T> *n = new Node<T>(e);
        if (top == NULL)
        {
            top = n;
        }
        else
        {
            n->link = top;
            top = n;
        }
    }

    void pop()
    {
        if (isEmpty())
        {
            cout << "Empty" << endl;
            return;
        }
        Node<T> *temp = top;
        top = top->link;
        delete temp;
    }

    T topElement()
    {
        return top->data;
    }

    void show()
    {
        Node<T> *current = top;
        while (current != nullptr)
        {
            cout << current->data << endl;
            current = current->link;
        }
        cout << "----------------" << endl;
    }
};

int main()
{
    Stack<string> *s = new Stack<string>();
    s->push("Mahin");
    s->push("Ahmed");
    s->push("Maruf");
    s->show();

    s->pop();

    s->show();

    return 0;
}
