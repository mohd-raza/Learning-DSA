#include <iostream>
using namespace std;

struct Stack
{
    int size;
    int top;
    int *S;
};

void create(struct Stack *st)
{
    cout << "Enter Size: " << endl;
    cin >> st->size;
    cout << "size: " << st->size << endl;
    st->top = -1;
    st->S = new int[st->size];
}
void display(struct Stack st)
{
    for (int i = st.top; i >= 0; i--)
    {
        cout << st.S[i] << " ";
    }
    cout << endl;
}
void push(struct Stack *st, int x)
{
    if (st->top == st->size - 1)
        cout << "Stack Overflow" << endl;
    else
    {
        st->top++;
        st->S[st->top] = x;
    }
}
int pop(struct Stack *st)
{
    int x = -1;
    if (st->top == -1)
        cout << "Stack Underflow" << endl;
    else
    {
        x = st->S[st->top];
        st->top--;
    }
    return x;
}
int peek(struct Stack st, int pos)
{
    int x = -1;
    if (st.top - pos + 1 < 0)
        cout << "Invalid index" << endl;
    x = st.S[st.top - pos + 1];
    return x;
}
void isEmpty(struct Stack st)
{
    if (st.top == -1)
        cout << "Stack is empty" << endl;
    else
        cout << "Stack is not empty" << endl;
}
void isFull(struct Stack st)
{
    if (st.top == st.size - 1)
        cout << "Stack is full" << endl;
    else
        cout << "Stack is not full" << endl;
}
int stackTop(struct Stack st)
{
    if (st.top != -1)
        return st.S[st.top];
    return -1;
}
int main(int argc, char const *argv[])
{
    struct Stack st;
    create(&st);
    push(&st, 1);
    push(&st, 4);
    push(&st, 3);
    push(&st, 7);
    push(&st, 9);
    display(st);
    // cout << pop(&st) << endl;
    // display(st);
    isFull(st);
    cout << "peeked: " << peek(st, 2) << endl;
    cout << "Stack top is : " << stackTop(st) << endl;

    return 0;
}
