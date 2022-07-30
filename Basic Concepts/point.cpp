#include <iostream>
#include <stdlib.h>
using namespace std;

int main()
{
    // int a = 10;
    // int *p;
    // p = &a;
    // cout << p << endl;
    // cout << *p << endl;
    // cout << &a << endl;

    // int A[5] = {0, 1, 2, 3, 4};
    // int *p;
    // p = A;

    // for (int i = 0; i < 5; i++)
    // {
    //     cout << &p[i] << endl;
    // }

    int *p;
    // p = (int *)malloc(sizeof(int));
    p = new int[5];

    p[0] = 0;
    p[1] = 10;
    p[2] = 20;
    p[3] = 30;
    p[4] = 40;
    for (int i = 0; i < 5; i++)
    {
        cout << p[i] << endl;
    }

    delete[] p;
    // de-allocate memory
    return 0;
}
