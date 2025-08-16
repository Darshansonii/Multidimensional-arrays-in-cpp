//Name-Darshan Soni
//PRN-24070123034
//Exp-8

#include <iostream>
using namespace std;

int main() {
    int row1, col1, row2, col2;
    cout << "Enter number of rows for Matrix 1: ";
    cin >> row1;
    cout << "Enter number of columns for Matrix 1: ";
    cin >> col1;
    cout << "Enter number of rows for Matrix 2: ";
    cin >> row2;
    cout << "Enter number of columns for Matrix 2: ";
    cin >> col2;
    if (col1 != row2) {
        cout << "\nMatrix multiplication not possible!";
        cout << "\n(Number of columns in Matrix 1 must equal number of rows in Matrix 2)";
        return 0;
    }
    int matrix1[3][3], matrix2[3][3], result[3][33] = {0};
    cout << "\nEnter elements of Matrix 1:\n";
    for (int i = 0; i < row1; i++) {
        for (int j = 0; j < col1; j++) {
            cout << "Element [" << i << "][" << j << "]: ";
            cin >> matrix1[i][j];
        }
    }
      cout << "\nEnter elements of Matrix 2:\n";
    for (int i = 0; i < row2; i++) {
        for (int j = 0; j < col2; j++) {
            cout << "Element [" << i << "][" << j << "]: ";
            cin >> matrix2[i][j];
        }
    }
    for (int i = 0; i < row1; i++) {
        for (int j = 0; j < col2; j++) {
            result[i][j] = 0;
            for (int k = 0; k < col1; k++) {
                result[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }
    cout << "\nResultant Matrix after Multiplication:\n";
    for (int i = 0; i < row1; i++) {
        for (int j = 0; j < col2; j++) {
            cout << result[i][j] << "\t";
        }
        cout << endl;
    }

    return 0;
}


/*
Output
Enter number of rows for Matrix 1: 3
Enter number of columns for Matrix 1: 3
Enter number of rows for Matrix 2: 3
Enter number of columns for Matrix 2: 3

Enter elements of Matrix 1:
Element [0][0]: 5
Element [0][1]: 8
Element [0][2]: 9
Element [1][0]: 6
Element [1][1]: 7
Element [1][2]: 8
Element [2][0]: 5
Element [2][1]: 6
Element [2][2]: 5

Enter elements of Matrix 2:
Element [0][0]: 8
Element [0][1]: 9
Element [0][2]: 9
Element [1][0]: 8
Element [1][1]: 5
Element [1][2]: 2
Element [2][0]: 3
Element [2][1]: 1
Element [2][2]: 1 

Resultant Matrix after Multiplication:
131     94      70
128     97      76
103     80      62
*/