// sum of first n natural numbers using recursion
#include <iostream>
using namespace std;

int sum(int n)
{
    if (n > 0)
    {
        return sum(n - 1) + n;
    }
    return 0;
}
int main()
{
    int s = 0;
    int n;
    cout << "Enter the sum required: " << endl;
    cin >> n;
    s = sum(n);
    cout << s << endl;
    return 0;
}
