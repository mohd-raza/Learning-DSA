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
int LinearSearch(struct Array *arr, int key)
{
    for (int i = 0; i < arr->length; i++)
    {
        if (key == arr->A[i])
            return i;
    }
    return -1;
}
int improviseLS(struct Array *arr, int key)
{
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
    int key;
    cout << "\nEnter the element to be searched" << endl;
    cin >> key;
    cout << "Element found at index:" << LinearSearch(&arr, key) << endl;
    return 0;
}