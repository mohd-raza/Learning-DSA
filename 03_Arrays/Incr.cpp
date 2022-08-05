#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int *p, *q;
    int i;
    p = new int[5];
    p[0] = 0, p[1] = 10, p[2] = 20, p[3] = 30, p[4] = 40;
    q = new int[10];
    for (i = 0; i < 5; i++)
        q[i] = p[i];
    for (i = 0; i < 5; i++)
        cout << p[i] << endl;
    delete[] p;
    p = q;
    q = NULL;
    p[5] = 50;
    cout << "After " << endl;
    for (i = 0; i < 6; i++)
        cout << p[i] << endl;
    return 0;
}
