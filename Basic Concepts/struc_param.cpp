#include <iostream>
#include <stdlib.h>
using namespace std;

struct Rectangle
{
    int lenght, breadth;
};
// void fun(struct Rectangle *r)
// {
//     r->lenght = 11;
//     cout << "Lenght " << r->lenght << endl;
//     cout << "Breadth " << r->breadth << endl;
// }

struct Rectangle *fun()
{
    struct Rectangle *p;
    p = new Rectangle;

    p->lenght = 15;
    p->breadth = 7;
    return p;
}
int main()
{
    struct Rectangle *ptr = fun();
    cout << ptr->lenght << endl;
    cout << ptr->breadth << endl;

    return 0;
}
