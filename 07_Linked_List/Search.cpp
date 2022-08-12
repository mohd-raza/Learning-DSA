#include <iostream>
using namespace std;

struct Node
{
    int data;
    struct Node *next;
} *first = NULL;

void create(int A[], int n)
{
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
struct Node *LSearch(struct Node *p, int key)
{
    while (p != NULL)
    {
        if (key == p->data)
            return p;
        p = p->next;
    }
    return NULL;
}
struct Node *Rsearch(struct Node *p, int key)
{
    if (p == NULL)
        return NULL;

    if (key == p->data)
        return p;

    return Rsearch(p->next, key);
}
int main(int argc, char const *argv[])
{
    struct Node *temp;
    int A[] = {45, 6, 9, 72, 80, 75, 46, 69};
    create(A, 8);
    // temp = LSearch(first, 75);
    temp = Rsearch(first, 7);
    if (temp)
        cout << "key is found: " << temp->data << endl;
    else
        cout << "key not found" << endl;
    return 0;
}
