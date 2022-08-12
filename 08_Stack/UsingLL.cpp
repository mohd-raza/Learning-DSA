// Stack Ops using Linked list

#include <iostream>
using namespace std;

struct Node
{
    int data;
    struct Node *next;
} *top = NULL;

void push(int x)
{
    Node *t = new Node();

    if (t == NULL)
        cout << "Stack Overflow" << endl;
    else
    {
        t->data = x;
        t->next = top;
        top = t;
    }
}
int pop()
{
    struct Node *t;
    int x = -1;
    if (top == NULL)
        cout << "Stack Underflow" << endl;
    else
    {
        t = top;
        top = top->next;
        x = t->data;
        delete t;
    }
    return x;
}
void display()
{
    struct Node *p;
    p = top;
    while (p != NULL)
    {
        cout << p->data << " ";
        p = p->next;
    }
    cout << endl;
}
int main(int argc, char const *argv[])
{
    push(10);
    push(20);
    push(30);
    display();
    cout << pop();
    display();
    return 0;
}
