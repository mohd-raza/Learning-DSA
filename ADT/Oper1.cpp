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
    // return arr.A[0];
}
int Get(struct Array arr, int index)
{
    if (index > 0 && index < arr.length)
        return arr.A[index];
    return -1;
}
void Set(struct Array *arr, int index, int value)
{
    if (index > 0 && index < arr->length)
    {
        arr->A[index] = value;
    }
}
int Max(struct Array arr)
{
    int max = arr.A[0];
    int i;
    for (int i = 0; i < arr.length; i++)
    {
        if (arr.A[i] > max)
            max = arr.A[i];
    }
    return max;
}
int Min(struct Array arr)
{
    int min = arr.A[0];
    int i;
    for (int i = 0; i < arr.length; i++)
    {
        if (arr.A[i] < min)
            min = arr.A[i];
    }
    return min;
}
int Sum(struct Array arr)
{
    int t = 0;

    for (int i = 0; i < arr.length; i++)
        t += t + arr.A[i];
    return t;
}
float Avg(struct Array arr)
{
    return (Sum(arr) / arr.length);
}
int main(int argc, char const *argv[])
{
    struct Array arr = {1, 2, 3, 4, 5};
    arr.length = 5;
    Display(arr);
    // cout << "\n"<< Get(arr, 1);
    Set(&arr, 4, 10);
    Display(arr);
    cout << "\n"
         << Max(arr) << endl;
    cout << Min(arr) << endl;
    cout << Sum(arr) << endl;
    cout << Avg(arr) << endl;
    return 0;
}
