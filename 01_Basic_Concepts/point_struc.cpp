// pointer to a structure
#include <iostream>
using namespace std;

struct Rectangle
{
    int lenght, breadth;
};

int main()
{
    // Rectangle r = {10, 5};
    // cout << r.breadth << endl;
    // cout << r.lenght << endl;

    // Rectangle *p = &r;
    // cout << p->lenght << endl;
    // cout << p->breadth << endl;

    // creating an object in the heap
    Rectangle *p;
    // p = (struct Rectangle *)malloc(sizeof(struct Rectangle));
    p = new Rectangle;
    p->lenght = 15;
    p->breadth = 7;
    cout << p->lenght << endl;
    cout << p->breadth << endl;
    return 0;
}
