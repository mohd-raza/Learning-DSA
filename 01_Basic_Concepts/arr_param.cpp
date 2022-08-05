#include <iostream>
using namespace std;

// void fun(int A[], int n)
// {
//     // for (int i = 0; i < 5; i++)
//     // {
//     //     cout << A[i] << endl;
//     // }
//     A[0] = 15;
// }
// int main()
// {
//     int A[] = {
//         0,
//         1,
//         2,
//         3,
//         4,
//     };
//     int n = 5;
//     // cout << sizeof(A) / sizeof(int) << endl;
//     fun(A, n);
//     for (int i = 0; i < 5; i++)
//     {
//         cout << A[i] << endl;
//     }
//     return 0;
// }

int *fun(int size)
{
    int *p;
    p = new int[size];
    for (int i = 0; i < size; i++)
    {
        p[i] = i + 1;
    }
    return p;
}
int main()
{
    int *ptr, sz = 5;
    ptr = fun(sz);
    for (int i = 0; i < sz; i++)
    {
        cout << ptr[i] << endl;
    }
    return 0;
}
