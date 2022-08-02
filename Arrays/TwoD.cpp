#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int A[2][2] = {{1, 2}, {5, 6}};
    int *B[3]; // created in heap memory
    int **C;   // created in heap memory
    int i, j;
    for (i = 0; i < 2; i++)
        for (j = 0; j < 2; j++)
            cout << A[i][j] << endl;
    B[0] = new int[4];
    B[1] = new int[4];
    B[2] = new int[4];
    C = new int *[2];
    C[0] = new int[2];
    C[1] = new int[2];
    return 0;
}
