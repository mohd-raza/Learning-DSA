#include <iostream>
using namespace std;

void Insert(int A[], int n)
{
    int i = n, temp;
    temp = A[n];
    while (i > 1 && temp > A[i / 2])
    {
        A[i] = A[i / 2];
        i = i / 2;
    }
    A[i] = temp;
}
int Delete(int A[], int n)
{
    int i, j, x, temp, val;
    val = A[1];
    x = A[n];
    A[1] = A[n];
    A[n] = val;
    i = 1;
    j = i * 2;
    while (j <= n - 1)
    {
        if (j < n - 1 && A[j + 1] > A[j])
            j = j + 1;
        if (A[i] < A[j])
        {
            temp = A[i];
            A[i] = A[j];
            A[j] = temp;
            i = j;
            j = 2 * j;
        }
        else
            break;
    }
    return val;
}
int main(int argc, char const *argv[])
{
    int H[] = {0, 14, 15, 5, 20, 30, 8, 40};
    int len = sizeof(H) / sizeof(H[0]);
    int i;
    for (i = 2; i <= len - 1; i++)
        Insert(H, i);
    for (i = 1; i <= len - 1; i++)
        cout << H[i] << " ";

    cout << endl;
    cout << "After deletion" << Delete(H, 5) << endl;
    for (i = 1; i <= len - 1; i++)
        cout << H[i] << " ";
    return 0;
}