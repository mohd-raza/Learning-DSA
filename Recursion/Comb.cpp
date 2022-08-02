// combination formula
#include <iostream>
using namespace std;

int fact(int n)
{
    if (n == 0)
        return 1;
    return fact(n - 1) * n;
}
int nCr(int n, int r)
{
    int num, den;
    num = fact(n);
    den = fact(r) * fact(n - r);

    return num / den;
}
// using pascal's triangle and recursion
int NcR(int n, int r)
{
    if (n == r || r == 0)
        return 1;
    return NcR(n - 1, r - 1) + NcR(n - 1, r);
}
int main(int argc, char const *argv[])
{
    cout << NcR(5, 2);
    return 0;
}
