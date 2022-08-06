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
int BinarySearch(struct Array arr, int key)
{
    int l = 0;
    int h = arr.length - 1;
    while (l <= h)
    {
        int mid = (l + h) / 2;
        if (key == arr.A[mid])
            return mid;
        else if (key < arr.A[mid])
            h = mid - 1;
        else
            l = mid + 1;
    }
    return -1;
}
int RBinSearch(int a[], int l, int h, int key)
{
    int mid = 0;
    if (l <= h)
    {
        mid = (l + h) / 2;
        if (key == a[mid])
            return mid;
        else if (key < a[mid])
            return RBinSearch(a, l, mid - 1, key);
    }
    else
        return RBinSearch(a, mid + 1, h, key);
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
    cout << "Enter elements of the array in ascending order" << endl;
    for (i = 0; i < n; i++)
        cin >> arr.A[i];
    arr.length = n;
    Display(arr);

    int key;
    cout << "Enter the element to be searched" << endl;
    cin >> key;
    // cout << "Element found at " << BinarySearch(arr, key) << endl;
    cout << "Element found at " << RBinSearch(arr.A, 0, arr.length, key) << endl;
    return 0;
}
