// factorial using recursion
#include <iostream>
using namespace std;
int factorial(int n)
{
    if (n > 0)
        return factorial(n - 1) * n;
    return 1;
}
int main()
{
    int s = 0;
    int n;
    cout << "Enter the factorial required: " << endl;
    cin >> n;
    s = factorial(n);
    cout << s << endl;
    return 0;
}