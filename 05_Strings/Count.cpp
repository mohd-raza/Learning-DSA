#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    char A[] = "How are you?";
    int vowel = 0;
    int consonant = 0;
    for (int i = 0; A[i] != '\0'; i++)
    {
        if (A[i] == 'a' || A[i] == 'e' || A[i] == 'i' || A[i] == 'o' || A[i] == 'u' || A[i] == 'A' || A[i] == 'E' || A[i] == 'I' || A[i] == 'O' || A[i] == 'U')
        {
            vowel++;
        }
        else if ((A[i] > 'A' && A[i] < 'Z') || (A[i] > 'a' && A[i] < 'z'))
        {
            consonant++;
        }
    }
    cout << vowel << endl;
    cout << consonant << endl;
    cout << sizeof(A) << endl;
    return 0;
}
