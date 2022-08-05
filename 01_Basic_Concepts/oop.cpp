#include <iostream>
using namespace std;

class Rectangle
{
public:
    int length;
    int breadth;

    void initialize(int l, int b)
    {
        length = l;
        breadth = b;
    }
    int area()
    {
        return length * breadth;
    }
    int perimeter()
    {
        int p;
        p = 2 * (length + breadth);
        return p;
    }
};
int main()
{
    int l, b;
    Rectangle r;
    cin >> l >> b;
    r.initialize(l, b);
    int a = r.area();
    int peri = r.perimeter();

    cout << "Area " << a << endl;
    cout << "Perimeter " << peri << endl;
    return 0;
}
