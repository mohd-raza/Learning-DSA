// exponential recursion

#include <iostream>
using namespace std;

int pow(int m, int n)
{
    if (n == 0)
        return 1;
    if (n % 2 == 0)
        return pow(m * m, n / 2);
    else
        return m * pow(m * m, (n - 1) / 2);
}
int main()
{
    int s = 0;
    int m, n;
    cout << "Enter the m and n: " << endl;
    cin >> m >> n;
    s = pow(m, n);
    cout << s << endl;
    return 0;
}