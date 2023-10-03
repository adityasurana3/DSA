// 2D Array is calculated bt c*i+j where c is total num of column and i is the currect row and j is the current column

#include<iostream>
using namespace std;

bool isPresent(int arr[][4], int target, int row, int col){
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            if(arr[i][j] == target){
                return 1;
            }
        }
    }
    return 0;
}

int main(){
    int arr[3][4];
    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            cin >> arr[i][j];
        }
    }
    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            cout << arr[i][j]<< " ";
        }
        cout << endl;
    }
    cout << "Enter the number to search: ";
    int target;
    cin >> target;
    if(isPresent(arr, target , 3, 4)){
        cout << "Found";
    }
    else{
        cout << "Not Found";
    }
    return 0;
}