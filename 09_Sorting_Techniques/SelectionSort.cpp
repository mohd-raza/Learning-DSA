#include <iostream>
using namespace std;
int n;
int *A;
void display(int A[])
{
    for (int i = 0; i < n; i++)
    {
        cout << A[i] << " ";
    }
}
void swap(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}
void SelectionSort()
{
    int i, j, k;
    for (i = 0; i < n - 1; i++)
    {
        for (j = k = i; j < n; j++)
        {
            if (A[j] < A[k])
                k = j;
        }
        swap(&A[i], &A[k]);
    }
}
int main(int argc, char const *argv[])
{
    cout << "Enter the lenght of array: " << endl;
    cin >> n;
    A = new int[n];
    cout << "Enter the elements:" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> A[i];
    }
    cout << endl;
    cout << "Array after Selection Sort: " << endl;
    SelectionSort();
    display(A);
    return 0;
}
