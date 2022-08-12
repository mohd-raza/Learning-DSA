#include <iostream>
#include <array>
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
int count(struct Node *p)
{
    int l = 0;
    while (p)
    {
        l++;
        p = p->next;
    }
    return l;
}
int Rcount(struct Node *p)
{
    if (p != NULL)
        return Rcount(p->next) + 1;
    else
        return 0;
}
int Sum(struct Node *p)
{
    if (p == NULL)
        return 0;
    else
        return Sum(p->next) + p->data;
}
int main(int argc, char const *argv[])
{
    int A[] = {3, 5, 7, 10, 15};
    create(A, 5);
    int al = sizeof(A) / sizeof(A[0]);
    cout << "lenght is " << al << endl;
    cout << Rcount(first) << endl;
    cout << Sum(first) << endl;
    return 0;
}
