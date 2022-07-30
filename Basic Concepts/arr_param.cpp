#include <iostream>
using namespace std;

void fun(int A[], int n)
{
    for (int a : A)
    {
        cout << a << endl;
    }
}
int main()
{
    int A[] = {
        0,
        1,
        2,
        3,
        4,
    };
    int n = 5;
    cout << sizeof(A) / sizeof(int) << endl;
    fun(A, n);
    return 0;
}
