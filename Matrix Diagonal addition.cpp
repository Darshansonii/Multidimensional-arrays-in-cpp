//Name-Darshan Soni
//PRN-24070123034
//Exp-8

#include <iostream>
using namespace std;

int main() {  int i, j, r = 3, c = 3;
    int a[r][c] = {{1,12,3},{5,7,44},{5,1,10}}, sum=0; 

    if(r == c){

    cout << "Given matrix is:"<<endl;
    for(i = 0;i<r;i++){
       for(j = 0;j<c;j++) {
         cout << a[i][j] << " ";
       }
        cout << endl;
    }
    for(i = 0;i<r;i++){
       for(j = 0;j<c;j++) {
          if(i == j){
              sum += a[i][j];
          }
       }
    }
    cout << "The sum of diagonals is : " << sum;
}
    else
    cout << "Input should be square matrix";
        return 0;
}

/*
Output
Given matrix is:
1 12 3
5 7 44
5 1 10
The sum of diagonals is : 18
*/