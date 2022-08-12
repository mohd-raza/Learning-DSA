#include <iostream>
#include <stack>
using namespace std;

void isBalance()
{
    stack<char> a;
    string s;
    cout << "Enter string may or may not containing parentheses: ";
    cin >> s;

    int flag = 0;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == '(')
        {
            a.push(s[i]);
            flag = 1;
        }
        if (!a.empty())
        {
            if (s[i] == ')')
            {
                if (a.top() == '(')
                {
                    a.pop();
                    continue;
                }
                else
                    break;
            }
        }
    }
    if ((a.empty()) && (flag == 1))
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}

int main(int argc, char const *argv[])
{
    isBalance();
    return 0;
}
