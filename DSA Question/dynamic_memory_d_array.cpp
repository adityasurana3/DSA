#include<iostream>
using namespace std;

int main(){
    int row, col;
    cout << "Enter the row and column: ";
    cin >> row >> col;

    // Creating the 2D array
    int** arr = new int*[row];
    for(int i=0; i<row; i++){
        arr[i] = new int[col];
    }

    // taking input
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cin >> arr[i][j];
        }
    }

    // Output
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cout << arr[i][j] << " ";
        } cout << endl;
    }

    // Deleteing memory in heap
    for(int i=0;i<row;i++){
        delete []arr[i];
    }
    delete []arr;

}