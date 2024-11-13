#include <iostream>
using namespace std;

int main() {
    int rows, cols;
    cout << "Enter the number of rows: ";
    cin >> rows;
    cout << "Enter the number of columns: ";
    cin >> cols;

    int arry[rows][cols];
    cout << "Enter elements of the array:" << endl;

    
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << "Element[" << i << "][" << j << "]: ";
            cin >> arry[i][j];
        }
    }

    
    cout << "\nThe 2D array is:\n";
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << arry[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}

