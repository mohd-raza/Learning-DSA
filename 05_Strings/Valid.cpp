#include <iostream>
using namespace std;

int valid(char *name)
{
    for (int i = 0; name[i] != '\0'; i++)
    {
        if (!(name[i] >= 65 && name[i] <= 90) &&
            !(name[i] >= 97 && name[i] <= 122) &&
            !(name[i] >= '0' && name[i] <= '9'))
        {
            return 0;
        }
    }
    return 1;
}
int main(int argc, char const *argv[])
{
    char name[] = "Anil321";
    if (valid(name))
    {
        cout << "valid" << endl;
    }
    else
    {
        cout << "invalid" << endl;
    }
    return 0;
}
