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
int Delete(struct Array *arr, int index)
{
    int x = 0;
    if (index > 0 && index <= arr->length)
    {
        x = arr->A[index];
        for (int i = index; i < arr->length - 1; i++)
        {
            arr->A[i] = arr->A[i + 1];
        }
        arr->length--;
        return x;
    }
    return -1;
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
    Display(arr);
    cout << "\nEnter the index to be deleted" << endl;
    int index;
    cin >> index;
    Delete(&arr, index);
    Display(arr);
    return 0;
}