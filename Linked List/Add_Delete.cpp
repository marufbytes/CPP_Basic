#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node *link;
};

Node *createNode(int data)
{
    Node *n = new Node();
    n->data = data;
    n->link = NULL;
    return n;
}

Node *addFirst(Node *head, int data)
{
    Node *n = createNode(data);
    n->link = head;
    return n;
}

Node *addLast(Node *head, int data)
{
    Node *n = createNode(data);
    n->link = NULL;

    if (head == NULL)
    {
        return n;
    }
    else
    {
        Node *curr = head;
        while (curr->link != NULL)
        {
            curr = curr->link;
        }
        curr->link = n;
    }
    return head;
}

Node *deleteFirst(Node *head)
{
    if (head == NULL)
    {
        return NULL;
    }
    else
    {
        Node *temp = head;
        head = head->link;
        delete temp;
        return head;
    }
}

Node *deleteLast(Node *head)
{
    if (head == NULL)
    {
        cout << "List is empty " << endl;
        return NULL;
    }
    else if (head->link = NULL)
    {
        delete head;
        return NULL;
    }
    else
    {
        Node *curr = head;
        while (curr->link != NULL)
        {
            curr = curr->link;
        }
        delete curr->link;
        curr->link = NULL;
        return head;
    }
}

void printList(Node *head)
{
    if (head == NULL)
    {
        cout << "List is empty ";
    }
    else
    {
        Node *curr = head;
        while (curr != NULL)
        {
            cout << curr->data << "   ";
            curr = curr->link;
        }
        cout << "NULL " << endl;
    }
}

int main()
{
    Node *head = NULL;

    head = addFirst(head, 10);
    head = addFirst(head, 20);
    head = addLast(head, 30);
    cout << "List after adding : \n";
    printList(head);

    head = deleteFirst(head);
    cout << "Delete from the beginning \n";
    printList(head);

    head = deleteLast(head);
    cout << "Delete from ending \n";
    printList(head);

    return 0;
}