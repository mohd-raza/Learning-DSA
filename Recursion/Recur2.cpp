#include <iostream>
using namespace std;

int x = 0;
int fun(int n)
{
    // static int x;
    if (n > 0)
    {
        x++;
        // return fun(n - 1) + n;
        return fun(n - 1) + x;
    }
    return 0;
}

int main()
{
    int r;
    r = fun(5);
    cout << r << endl;
    r = fun(5);
    cout << r << endl;
    return 0;
}
