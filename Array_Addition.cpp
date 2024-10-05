//Sakshi Sonawane
//PRN:24070123505
//Experiment 8.2
#include<iostream>
using namespace std;

int main() {
    int i, j, r1, c1, r2, c2;
    
    cout << "Enter number of rows of first matrix: " << endl;
    cin >> r1;
    cout << "Enter number of columns of first matrix: " << endl;
    cin >> c1; 
    cout << "Enter number of rows of second matrix: " << endl;
    cin >> r2;
    cout << "Enter number of columns of second matrix: " << endl;
    cin >> c2;
    
    if(r1 == r2 && c1 == c2) {
        int a[r1][c1];
        int b[r2][c2];
        int c[r1][c1];
        
        cout << "Enter elements of the first matrix:" << endl;
        for(i = 0; i < r1; i++) {
            for(j = 0; j < c1; j++) {
                cout << "Element at (" << i+1 << ", " << j+1 << "): ";
                cin >> a[i][j];
            }
        }        
        cout << "Enter elements of the second matrix:" << endl;
        for(i = 0; i < r2; i++) {
            for(j = 0; j < c2; j++) {
                cout << "Element at (" << i+1 << ", " << j+1 << "): ";
                cin >> b[i][j];
            }
        }       
        for(i = 0; i < r1; i++) {
            for(j = 0; j < c1; j++) {
                c[i][j] = a[i][j] + b[i][j];
            }
        }       
        cout << "The resultant matrix after addition is:" << endl;
        for(i = 0; i < r1; i++) {
            for(j = 0; j < c1; j++) {
                cout << c[i][j] << " ";
            }
            cout << endl;

        }
    } 
    else {
        cout << "Number of rows or columns do not match for matrix addition." << endl;
    }  
    return 0;
}
