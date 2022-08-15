// This is an in-place comparison-based sorting algorithm. Here, a sub-list is maintained which is always sorted.
// For example, the lower part of an array is maintained to be sorted.
// An element which is to be 'insert'ed in this sorted sub-list, has to find its appropriate place and then it has to be inserted there.
// Hence the name, insertion sort.

// The array is searched sequentially and unsorted items are moved and inserted into the sorted sub-list (in the same array).
// This algorithm is not suitable for large data sets as its average and worst case complexity are of Ο(n2), where n is the number of items.

// no of passes: n-1
// starting from 1 and going till n so n-1

#include <iostream>
using namespace std;
int n;
int A[100];
void display(int A[])
{
    for (int i = 0; i < n; i++)
    {
        cout << A[i] << " ";
    }
}
void InsertionSort()
{
    int i, j, x;
    for (i = 1; i < n; i++)
    {
        j = i - 1;
        x = A[i];
        while (j > -1 && A[j] > x)
        {
            A[j + 1] = A[j];
            j--;
        }
        A[j + 1] = x;
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
    cout << "Array after Insertion Sort: " << endl;
    InsertionSort();
    display(A);
    return 0;
}
