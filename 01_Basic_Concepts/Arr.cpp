#include <iostream>

using namespace std;

int main()
{
    // int A[10] = {2, 5, 9, 4, 7};
    // A[0] = 15;
    // A[1] = 2;
    // A[2] = 3;
    // cout << sizeof(A) << endl;
    // cout << A[0] << " " << A[1] << endl;
    // cout << A[9] << endl;

    int n;
    cout << "Enter Size";
    cin >> n;
    int A[n];
    // for displaying  and array
    for (int i = 0; i < n; i++)
    {
        cout << A[i] << endl;
    }
    // whenever values are not assigned it take in garbage value
    return 0;
}