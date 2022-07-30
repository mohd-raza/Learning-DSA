#include <iostream>
using namespace std;

struct Rectangle
{
    int length;
    int breadth;
};
void initialize(Rectangle *r, int l, int b)
{
    r->length = l;
    r->breadth = b;
}
int area(Rectangle r)
{
    return r.length * r.breadth;
}
int perimeter(Rectangle r)
{
    int p;
    p = 2 * (r.length + r.breadth);
    return p;
}
int main()
{
    int l, b;
    Rectangle r = {0, 0};
    cin >> l >> b;
    initialize(&r, l, b);
    int a = area(r);
    int peri = perimeter(r);

    cout << "Area " << a << endl;
    cout << "Perimeter " << peri << endl;
    return 0;
}
