#include <iostream>
using namespace std;

int n;
int *A;

void swap(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}

void display(int A[])
{
    for (int i = 0; i < n; i++)
    {
        cout << A[i] << " ";
    }
}

int partition(int low, int high)
{
    int pivot = A[low];
    int i = low, j = high;
    do
    {
        do
        {
            i++;
        } while (A[i] <= pivot);

        do
        {
            j--;
        } while (A[j] > pivot);

        if (i < j)
            swap(&A[i], &A[j]);

    } while (i > j);
    swap(&A[low], &A[high]);
    return j;
}

void QuickSort(int low, int high)
{
    int j;
    if (low < high)
    {
        j = partition(low, high);
        QuickSort(low, j);
        QuickSort(j + 1, high);
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
    cout << "Array after Quick Sort: " << endl;
    QuickSort(0, n - 1);
    display(A);
    return 0;
}
