#include <iostream>
using namespace std;

struct Node
{
    int data;
    struct Node *next;
} *first = NULL;
void create(int A[], int n)
{
    int i;
    struct Node *t, *last;
    first = new Node;
    first->data = A[0];
    first->next = NULL;
    last = first;
    for (int i = 1; i < n; i++)
    {
        t = new Node;
        t->data = A[i];
        t->next = NULL;
        last->next = t;
        last = t;
    }
}
void Display(struct Node *p)
{
    while (p != NULL)
    {
        cout << p->data << endl;
        p = p->next;
    }
}
void Rdisplay(struct Node *p)
{
    if (p != NULL)
    {
        Rdisplay(p->next);
        cout << p->data << endl;
    }
}
int main(int argc, char const *argv[])
{
    int A[] = {3, 5, 7, 10, 15};
    create(A, 5);
    Rdisplay(first);
    return 0;
}
