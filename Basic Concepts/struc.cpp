#include <iostream>
using namespace std;

// definition of structure
struct Rectangle
{
    int length, breadth;
    char x, y;
};

// struct Rectangle
// {
//     int length, breadth;
// } r1;
// another way of declaration

int main()
{
    // declaration of structure, can be declared outside main too
    struct Rectangle r1;
    r1.length = 10;
    r1.breadth = 15;
    cout << sizeof(r1) << endl;
    cout << r1.length << endl;
    cout << r1.breadth << endl;
    return 0;
}
