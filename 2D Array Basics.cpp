//Sakshi Sonawane
//PRN:24070123505
//Experiment 8.1
#include<iostream>
using namespace std;
int main() {
    int i, j, r, c;
    cout << "Enter number of rows: " << endl;
    cin >> r;
    cout << "Enter number of columns: " << endl;
    cin >> c;
    int arr[r][c];  
    for(i = 0; i < r; i++) {
        for(j = 0; j < c; j++) {
            cout << "Enter element at position (" << i+1 << ", " << j+1 << "): ";
            cin >> arr[i][j];
        }
    }
    cout << "The array elements are: " << endl;
    for(i = 0; i < r; i++) {
        for(j = 0; j < c; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl; 
    }

    return 0;
}
