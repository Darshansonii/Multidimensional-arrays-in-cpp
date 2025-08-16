//Name-Darshan Soni
//PRN-24070123034
//Exp-8


#include<iostream>
using namespace std;

int main() {
    int M[3][3];  
    for(int i = 0; i < 3; i++) 
    {
        for(int j = 0; j < 3; j++) 
        {
            cout << "Enter element(" << i+1 << ", " << j+1 << "): ";
            cin >> M[i][j];
        }
    }
    cout << "The matrix elements are: " << endl;
    for(int i = 0; i < 3; i++) 
    {
        for(int j = 0; j < 3; j++) 
        {
            cout << M[i][j] << " ";
        }
        cout << endl; 
    }

    return 0;
}

/*Output
Enter element(1, 1): 8
Enter element(1, 2): 7
Enter element(1, 3): 9
Enter element(2, 1): 5
Enter element(2, 2): 6
Enter element(2, 3): 4
Enter element(3, 1): 1
Enter element(3, 2): 5
Enter element(3, 3): 9
The matrix elements are: 
8 7 9
5 6 4
1 5 9
*/