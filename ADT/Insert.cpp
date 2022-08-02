#include <iostream>
using namespace std;

struct Array
{
    int *A;
    int size;
    int length;
};
void Display(struct Array arr)
{
    cout << "Elements are" << endl;
    for (int i = 0; i < arr.length; i++)
        cout << arr.A[i] << " ";
}
void Append(struct Array *arr, int x)
{
    if (arr->length < arr->size)
        arr->A[arr->length++] = x;
}
void Insert(struct Array *arr, int index, int x)
{
    int i;
    if (index > 0 && index <= arr->length)
    {
        for (i = arr->length; i > index; i--)
            arr->A[i] = arr->A[i - 1];
        arr->A[index] = x;
        arr->length++;
    }
}
int main(int argc, char const *argv[])
{
    struct Array arr;
    int n, i;
    cout << "Enter the size of the array" << endl;
    cin >> arr.size;
    arr.A = new int[arr.size];
    arr.length = 0;

    cout << "Enter number of numbers" << endl;
    cin >> n;
    cout << "Enter all elements of the array" << endl;
    for (i = 0; i < n; i++)
        cin >> arr.A[i];
    arr.length = n;
    int add;
    cout << "Enter the element to add to the array" << endl;
    cin >> add;
    Append(&arr, add);
    Display(arr);

    int insert, pos;
    cout << "Enter the element to add with its index" << endl;
    cin >> insert >> pos;
    Insert(&arr, pos, insert);
    Display(arr);
    return 0;
}

// Enter the size of the array
// 10
// Enter number of numbers
// 6
// Enter all elements of the array
// 1
// 2
// 3
// 4
// 5
// 6
// Enter the element to add to the array
// 7
// Elements are
// 1 2 3 4 5 6 7 Enter the element to add with its index
// 8 1
// Elements are
// 1 8 2 3 4 5 6 7