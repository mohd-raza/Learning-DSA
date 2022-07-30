#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    // reference does not consume memory
    /* code */
    int a = 10;
    int &r = a;
    a = 25;
    r = 40;
    cout << a << endl;
    cout << r << endl;
    return 0;
}
