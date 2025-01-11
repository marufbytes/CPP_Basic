#include <bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    Node *link;
};

Node *createNode(Node *h, int data)
{
    Node *n = new Node();
    n->data = data;
    n->link = nullptr;

    if (h == NULL)
    {
        return n;
    }
    else
    {
        while (h->link != NULL)
        {
            h = h->link;
        }
        h->link = n;
    }
    return h;
}

int main()
{
    Node *head = NULL;

    Node *n2 = createNode(head, 10);
    Node *n1 = createNode(head, 20);

    cout << n1->data << endl;
    cout << n2->data << endl;

    n1->link = n2;
}