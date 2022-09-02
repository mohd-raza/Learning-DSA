#include <iostream>
using namespace std;
int A[100];
int n;
void display(int A[])
{
    for (int i = 0; i < n; i++)
    {
        cout << A[i] << " ";
    }
}
void Merge(int A[], int low, int mid, int high)
{
    int i = low, j = mid + 1, k = low;
    int B[100];
    while (i <= mid && j <= high)
    {
        if (A[i] < A[j])
            B[k++] = A[i++];
        else
            B[k++] = A[j++];
    }
    for (; i <= mid; i++)
        B[k++] = A[i];
    for (; j <= high; j++)
        B[k++] = A[j];

    for (i = low; i <= high; i++)
    {
        A[i] = B[i];
    };
}

void IterMerge(int A[], int n)
{
    int i, p, low, high, mid;
    for (p = 2; p <= n; p = p * 2)
    {
        for (i = 0; i + p - 1 < n; i = i + p)
        {
            low = i;
            high = i + p - 1;
            mid = (low + high) / 2;
            Merge(A, low, mid, high);
        }
    }
    if (p / 2 < n)
    {
        Merge(A, 0, p / 2 - 1, n);
    }
}
int main(int argc, char const *argv[])
{
    cout << "Enter the lenght of array: " << endl;
    cin >> n;
    cout << "Enter the elements:" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> A[i];
    }
    cout << endl;
    cout << "Array after Merge Sort: " << endl;
    IterMerge(A, n);
    display(A);
    return 0;
}
