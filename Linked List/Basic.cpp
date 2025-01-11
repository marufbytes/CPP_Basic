#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node *link;
};

int main()
{

    Node *n1 = new Node();
    n1->data = 10;
    n1->link = NULL;
    cout << n1 << endl;

    Node *n2 = new Node();
    n2->data = 20;
    n2->link = NULL;

    n1->link = n2;
    cout << n1->link->data << endl;
}