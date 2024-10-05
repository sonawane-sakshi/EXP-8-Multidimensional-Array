//Name:Sakshi Sonawane
//PRN:24070123505
#include <iostream>
using namespace std;

int main() {
 int i, j, r, c;
 int B[3][3];
    cout << "Enter number of rows: ";
    cin >> r;
    cout << "Enter number of columns: ";
    cin >> c;
    if (r != c) {
        cout << "Matrix is not a square matrix." << endl;
        return 0;
    }
    int A[r][c];
   
    for(i = 0; i < r; i++) {
        for(j = 0; j < c; j++) {
            cout << "Enter element at position (" << i+1 << ", " << j+1 << "): ";
            cin >> A[i][j];
        }
    }
cout << endl;
cout << "The Tranpose of matrix is: "<<endl;
for(int i = 0;i<3;i++)
{
    for(int j = 0;j<3;j++)
    {
        B[i][j] = A[j][i];
        cout << B[i][j] << " ";
    }
    cout << endl;
}

    return 0;
}

