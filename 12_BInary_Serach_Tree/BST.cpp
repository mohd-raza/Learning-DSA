#include <iostream>
using namespace std;

class Node
{
public:
    Node *lchild;
    int data;
    Node *rchild;
};
class BST
{
private:
    Node *root;

public:
    BST()
    {
        root = nullptr;
    }
    Node *getRoot()
    {
        return root;
    }
    void Insert(int key);
    void InOrder(Node *p);
    Node *Search(int key);
    Node *rInsert(Node *p, int key);
    Node *rSearch(Node *p, int key);
    Node *Delete(Node *p, int key);
    int Height(Node *p);
    Node *InPre(Node *p);
    Node *InSucc(Node *p);
};

void BST::Insert(int key)
{
    Node *t = root;
    Node *r;
    Node *p;
    if (root == nullptr)
    {
        p = new Node;
        p->data = key;
        p->lchild = nullptr;
        p->rchild = nullptr;
        root = p;
        return;
    }
    while (t != nullptr)
    {
        r = t;
        if (key < p->data)
            t = t->lchild;
        else if (key > p->data)
            t = t->rchild;
        else
            return;
    }
    // Now t points at NULL and r points at insert location

    p = new Node;
    p->data = key;
    p->lchild = nullptr;
    p->rchild = nullptr;

    if (key < r->data)
    {
        r->lchild = p;
    }
    else
    {
        r->rchild = p;
    }
}
// Recursive Insert
Node *BST::rInsert(Node *p, int key)
{
    Node *t;
    if (p == nullptr)
    {
        t = new Node;
        t->data = key;
        t->lchild = nullptr;
        t->rchild = nullptr;
        return t;
    }
    if (key < p->data)
        p->lchild = rInsert(p->lchild, key);
    else if (key > p->data)
        p->rchild = rInsert(p->rchild, key);
    return p;
}
void BST::InOrder(Node *p)
{
    if (p)
    {
        InOrder(p->lchild);
        cout << p->data << ", ";
        InOrder(p->rchild);
    }
}
Node *BST::Search(int key)
{
    Node *t = root;
    while (t != nullptr)
    {
        if (key == t->data)
            return t;
        else if (key < t->data)
            t = t->lchild;
        else
            t = t->rchild;
    }
    return nullptr;
}
// Recursive search
Node *BST::rSearch(Node *p, int key)
{
    if (p == nullptr)
        return nullptr;
    if (key == p->data)
        return p;
    else if (key < p->data)
        return rSearch(p->lchild, key);
    else if (key > p->data)
        return rSearch(p->rchild, key);
}
Node *BST::Delete(Node *p, int key)
{
    Node *q;

    if (p == nullptr)
    {
        return nullptr;
    }

    if (p->lchild == nullptr && p->rchild == nullptr)
    {
        if (p == root)
        {
            root = nullptr;
        }
        delete p;
        return nullptr;
    }

    if (key < p->data)
    {
        p->lchild = Delete(p->lchild, key);
    }
    else if (key > p->data)
    {
        p->rchild = Delete(p->rchild, key);
    }
    else
    {
        if (Height(p->lchild) > Height(p->rchild))
        {
            q = InPre(p->lchild);
            p->data = q->data;
            p->lchild = Delete(p->lchild, q->data);
        }
        else
        {
            q = InSucc(p->rchild);
            p->data = q->data;
            p->rchild = Delete(p->rchild, q->data);
        }
    }
    return p;
}
Node *BST::InPre(Node *p)
{
    while (p && p->rchild != nullptr)
    {
        p = p->rchild;
    }
    return p;
}

Node *BST::InSucc(Node *p)
{
    while (p && p->lchild != nullptr)
    {
        p = p->lchild;
    }
    return p;
}

int BST::Height(Node *p)
{
    int x;
    int y;
    if (p == nullptr)
    {
        return 0;
    }
    x = Height(p->lchild);
    y = Height(p->rchild);
    return x > y ? x + 1 : y + 1;
}
int main(int argc, char const *argv[])
{
    BST Tree;

    Tree.rInsert(Tree.getRoot(), 10);
    Tree.rInsert(Tree.getRoot(), 5);
    Tree.rInsert(Tree.getRoot(), 20);
    Tree.rInsert(Tree.getRoot(), 8);
    Tree.rInsert(Tree.getRoot(), 30);
    Tree.InOrder(Tree.getRoot());
    cout << endl;
    Node *t;
    t = Tree.InPre(Tree.getRoot());
    cout << "InPre: " << t->data << endl;

    t = Tree.InSucc(Tree.getRoot());
    cout << "InSucc: " << t->data << endl;
    int search;
    cout << "Enter the element to be searched: " << endl;
    cin >> search;
    Node *temp = Tree.Search(search);
    if (temp != nullptr)
    {
        cout << temp->data << endl;
    }
    else
    {
        cout << "Element not found" << endl;
    }
    return 0;
}
