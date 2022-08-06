#include <iostream>
#include <string>
using namespace std;

int main(int argc, char const *argv[])
{
    string str;
    cout << "Enter a string:" << endl;
    getline(cin, str);
    int i;
    cout << "\nprinting string in reverse" << endl;
    for (i = str.length() - 1; i >= 0; i--)
    {
        cout << str[i];
    }

    return 0;
}
