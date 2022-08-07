#include <iostream>
using namespace std;
class LowerTriang
{
private:
    int *A;
    int n;

public:
    LowerTriang()
    {
        n = 2;
        A = new int[2 * 3];
    }
    LowerTriang(int n)
    {
        this->n = n; // this n is the private n
        A = new int[n * (n + 1) / 2];
    }
    ~LowerTriang()
    {
        delete[] A;
    }

    void Set(int i, int j, int x);
    int Get(int i, int j);
    void Display();
    int GetDim()
    {
        return n;
    }
};

void LowerTriang::Set(int i, int j, int x)
{
    if (i >= j)
        A[i * (i - 1) / 2 + j - 1] = x; // row majoring
}
int LowerTriang::Get(int i, int j)
{
    if (i >= j)
        return A[i * (i - 1) / 2 + j - 1];
    return 0;
}
void LowerTriang::Display()
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)

        {
            if (i >= j)
                cout << A[i * (i - 1) / 2 + j - 1] << " ";
            else
                cout << "0 ";
        }
        cout << endl;
    }
}

int main(int argc, char const *argv[])
{
    int d;
    cout << "Enter the dimension";
    cin >> d;

    LowerTriang lm(d);

    int x;
    cout << "\nEnter all elements" << endl;
    for (int i = 1; i <= d; i++)
    {
        for (int j = 1; j <= d; j++)
        {
            cin >> x;
            lm.Set(i, j, x);
        }
    }
    lm.Display();
    return 0;
}
