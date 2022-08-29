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
int main(int argc, char const *argv[])
{
    BST Tree;

    Tree.Insert(10);
    Tree.Insert(15);
    Tree.Insert(5);
    Tree.Insert(4);
    Tree.Insert(20);
    Tree.InOrder(Tree.getRoot());
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
