#include <iostream>
using namespace std;

void swap(int &x, int &y)
{
    int temp;
    temp = x;
    x = y;
    y = temp;
}
int main()
{
    int n1 = 100, n2 = 10;
    cout << "Earlier" << endl;
    cout << n1 << endl;
    cout << n2 << endl;
    swap(n1, n2);
    cout << "Later" << endl;
    cout << n1 << endl;
    cout << n2 << endl;
    return 0;
}
