// ** BUBBLE SORT **

// Bubble sort is a basic algorithm for arranging a string of numbers or
// other elements in the correct order. The method works by examining
// each set of adjacent elements in the string, from left to right,
// switching their positions if they are out of order. The algorithm
// then repeats this process until it can run through the entire string
// and find no two elements that need to be swapped.

#include <iostream>
using namespace std;
int A[100];
int n;
void swap(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}
void BubbleSort(int A[])
{
    for (int i = 0; i < n - 1; i++) // no of passes is n-1
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (A[j] > A[j + 1])
            {
                swap(&A[j], &A[j + 1]);
            }
        }
    }
}
void display(int A[])
{
    for (int i = 0; i < n; i++)
    {
        cout << A[i] << " ";
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
    cout << "Array after Bubble Sort: " << endl;
    BubbleSort(A);
    display(A);

    return 0;
}
