#include <iostream>
using namespace std;

class Node
{
public:
    Node *lchild;
    int data;
    Node *rchild;
};

class Queue
{
private:
    int size;
    int front;
    int rear;
    Node **Q; // [Node*]*: Pointer to [Pointer to Node]
public:
    Queue(int size);
    ~Queue();
    bool isFull();
    bool isEmpty();
    void enqueue(Node *x);
    Node *dequeue();
};

Queue::Queue(int size)
{
    this->size = size;
    front = -1;
    rear = -1;
    Q = new Node *[size];
}

Queue::~Queue()
{
    delete[] Q;
}

bool Queue::isEmpty()
{
    if (front == rear)
    {
        return true;
    }
    return false;
}

bool Queue::isFull()
{
    if (rear == size - 1)
    {
        return true;
    }
    return false;
}

void Queue::enqueue(Node *x)
{
    if (isFull())
    {
        cout << "Queue Overflow" << endl;
    }
    else
    {
        rear++;
        Q[rear] = x;
    }
}

Node *Queue::dequeue()
{
    Node *x = nullptr;
    if (isEmpty())
    {
        cout << "Queue Underflow" << endl;
    }
    else
    {
        front++;
        x = Q[front];
    }
    return x;
}
class Tree
{
private:
    Node *root;

public:
    Tree()
    {
        root = nullptr;
    }

    void CreateTree();
    void PreOrder() { PreOrder(root); } // Passing Private Parameter in Constructor
    void PreOrder(Node *p);
    void PostOrder() { PostOrder(root); } // Passing Private Parameter in Constructor
    void PostOrder(Node *p);
    void InOrder() { InOrder(root); }
    void InOrder(Node *p);
    void LevelOrder() { LevelOrder(root); } // Passing Private Parameter in Constructor
    void LevelOrder(Node *p);
    int Height() { return Height(root); } // Passing Private Parameter in Constructor
    int Height(Node *p);
    Node *getRoot() { return root; }
};

void Tree::CreateTree()
{
    Node *p, *t;
    int x;
    Queue q(25);
    cout << "Enter the root value" << endl;
    cin >> x;
    root = new Node;
    root->data = x;
    root->lchild = root->rchild = NULL;
    q.enqueue(root);

    while (!q.isEmpty())
    {
        p = q.dequeue();

        cout << "Enter the left child value of " << p->data << endl;
        cin >> x;
        if (x != -1)
        {
            t = new Node;
            t->data = x;
            t->lchild = t->rchild = NULL;
            p->lchild = t;
            q.enqueue(t);
        }

        cout << "Enter the right child value of " << p->data << endl;
        cin >> x;
        if (x != -1)
        {
            t = new Node;
            t->data = x;
            t->lchild = t->rchild = NULL;
            p->rchild = t;
            q.enqueue(t);
        }
    }
}
void Tree::PreOrder(Node *p)
{
    if (p)
    {
        cout << p->data << ",";
        PreOrder(p->lchild);
        PreOrder(p->rchild);
    }
}
void Tree::InOrder(Node *p)
{
    if (p)
    {
        InOrder(p->lchild);
        cout << p->data << ",";
        InOrder(p->rchild);
    }
}
void Tree::PostOrder(Node *p)
{
    if (p)
    {
        PostOrder(p->lchild);
        PostOrder(p->rchild);
        cout << p->data << ",";
    }
}

int main(int argc, char const *argv[])
{
    Tree t;
    t.CreateTree();
    cout << "PreOrder:" << endl;
    t.PreOrder(t.getRoot());
    cout << "InOrder:" << endl;
    t.InOrder(t.getRoot());
    cout << "PostOrder:" << endl;
    t.PostOrder(t.getRoot());
    return 0;
}
