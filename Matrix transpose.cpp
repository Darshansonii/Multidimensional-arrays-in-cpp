//Name-Darshan Soni
//PRN-24070123034
//Exp-8

#include <iostream>
using namespace std;

int main() {
    int rows, cols;
    cout << "Enter number of rows: ";
    cin >> rows;
    cout << "Enter number of columns: ";
    cin >> cols;
    int matrix[3][3], transpose[3][3];
    cout << "\nEnter elements of the matrix:\n";
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << "Element [" << i << "][" << j << "]: ";
            cin >> matrix[i][j];
        }
    }
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            transpose[j][i] = matrix[i][j]; 
        }
    }
    cout << "\nOriginal Matrix:\n";
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << matrix[i][j] << "\t";
        }
        cout << endl;
    }
    cout << "\nTranspose of the Matrix:\n";
    for (int i = 0; i < cols; i++) {
        for (int j = 0; j < rows; j++) {
            cout << transpose[i][j] << "\t";
        }
        cout << endl;
    }

    return 0;
}


/*
Output
Enter number of rows: 3
Enter number of columns: 3

Enter elements of the matrix:
Element [0][0]: 5
Element [0][1]: 7
Element [0][2]: 8
Element [1][0]: 9
Element [1][1]: 4
Element [1][2]: 5
Element [2][0]: 4
Element [2][1]: 7
Element [2][2]: 2

Original Matrix:
5       7       8
9       4       5
4       7       2

Transpose of the Matrix:
5       9       4
7       4       7
8       5       2
*/