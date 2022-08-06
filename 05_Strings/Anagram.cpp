#include <iostream>
#include <string>
using namespace std;

int main(int argc, char const *argv[])
{
    string str1, str2;
    cout << "Enter the first string" << endl;
    getline(cin, str1);
    cout << "Enter the second string" << endl;
    getline(cin, str2);
    int len1 = str1.length();
    int len2 = str2.length();
    cout << len1 << " " << len2 << endl;
    int found = 0, not_found = 0;
    if (len1 == len2)
    {
        for (int i = 0; i < len1; i++)
        {
            for (int j = 0; j < len1; j++)
            {
                if (str1[i] == str2[j])
                {
                    found = 1;
                    break;
                }
            }
            if (found == 0)
            {
                not_found = 1;
                break;
            }
        }
        if (not_found == 1)
            cout << "string are not anagrams" << endl;
        else
            cout << "string are anagrams" << endl;
    }
    return 0;
}
