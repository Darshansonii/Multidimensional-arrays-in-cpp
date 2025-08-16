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
    int matrix1[3][3], matrix2[3][3], sum[3][3];
    cout << "\nEnter elements for the first matrix:\n";
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << "Element ["<<i<<"]["<<j<<"]: ";
            cin >> matrix1[i][j];
        }
    }
    cout << "\nEnter elements for the second matrix:\n";
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << "Element [" << i << "][" << j << "]: ";
            cin >> matrix2[i][j];
        }
    }
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            sum[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }
    cout << "\nSum of the two matrices is:\n";
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << sum[i][j] << "\t";
        }
        cout << endl;
    }

    return 0;
}


/*Output
Enter number of rows: 3
Enter number of columns: 3

Enter elements for the first matrix:
Element [0][0]: 4
Element [0][1]: 7
Element [0][2]: 5
Element [1][0]: 6
Element [1][1]: 7
Element [1][2]: 8
Element [2][0]: 7
Element [2][1]: 5
Element [2][2]: 4

Enter elements for the second matrix:
Element [0][0]: 2
Element [0][1]: 6
Element [0][2]: 8
Element [1][0]: 1
Element [1][1]: 2
Element [1][2]: 4
Element [2][0]: 5
Element [2][1]: 7
Element [2][2]: 6

Sum of the two matrices is:
6       13      13
7       9       12
12      12      10
*/