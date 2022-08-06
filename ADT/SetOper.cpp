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
int main(int argc, char const *argv[])
{

    return 0;
}
