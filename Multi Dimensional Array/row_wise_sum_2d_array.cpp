#include<iostream>
using namespace std;

void row_sum(int arr[][3], int row, int col){
    int ans = -1;
    for(int i=0;i<row;i++){
        int sum = 0; 
        for(int j=0;j<col;j++){
            sum = sum + arr[i][j];
            cout << arr[i][j]<<" ";
        }
        // cout << "The sum of "<<i+1<<" row is "<<sum;
        cout <<"= "<<sum;
        if(sum>ans){
            ans = sum;
        }
        cout<<endl;
    }
    cout <<ans;
}

int main(){

    int arr[3][3];
    int arr_size = sizeof(arr)/sizeof(int);
    cout << "Toal size of array is "<<arr_size<<endl;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cin >> arr[i][j];
        }
    }
    cout<<"-----------------"<<endl;
    row_sum(arr,3,3);
    return 0;
}