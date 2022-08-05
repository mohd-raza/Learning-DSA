#include <iostream>
using namespace std;

struct Array
{
    int A[10];
    int length;
    int size;
};
void Display(struct Array arr)
{
    cout << "Elements are" << endl;
    for (int i = 0; i < arr.length; i++)
        cout << arr.A[i] << " ";
}
void InsertSort(struct Array *arr, int x)
{
    int i = arr->length - 1;
    if (arr->length == arr->size)
        return;
    while (i >= 0 && arr->A[i] > x)
    {
        arr->A[i + 1] = arr->A[i];
        i--;
    }
    arr->A[i + 1] = x;
    arr->length++;
}
bool isSorted(struct Array arr)
{
    for (int i = 0; i < arr.length - 1; i++)
    {
        if (arr.A[i] > arr.A[i + 1])
            return false;
    }
    return true;
}
int main()
{
    struct Array arr = {10, 20, 30, 40, 50};
    arr.length = 5;
    // InsertSort(&arr, 45);
    cout << isSorted(arr) << endl;
    Display(arr);
    return 0;
}
