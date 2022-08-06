#include <iostream>
using namespace std;

struct Array
{
    int A[5];
    int length;
};
void Display(struct Array arr)
{
    cout << "Elements are" << endl;
    for (int i = 0; i < arr.length; i++)
        cout << arr.A[i] << " ";
}
void swap(int *x, int *y)
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}
void Reverse(struct Array *arr)
{
    int *B;
    int i, j;
    B = new int[arr->length];
    for (i = arr->length - 1, j = 0; i >= 0; i--, j++)
    {
        B[j] = arr->A[i];
    }
    for (i = 0; i < arr->length; i++)
    {
        arr->A[i] = B[i];
    }
}
void SwapReverse(struct Array *arr)
{
    int i, j;
    for (i = 0, j = arr->length - 1; i < j; i++, j--)
    {
        swap(&arr->A[i], &arr->A[j]);
    }
}
int main()
{
    struct Array arr = {10, 20, 30, 40, 50};
    arr.length = 5;
    // Reverse(&arr);.
    SwapReverse(&arr);
    Display(arr);
    return 0;
}
