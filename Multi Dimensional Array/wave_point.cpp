#include<iostream>
using namespace std;

int main(){
    int arr[2][2];
    int arr_size = sizeof(arr)/sizeof(int);
    cout << "Toal size of array is "<<arr_size<<endl;
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            cin >> arr[i][j];
        }
    }
    cout<<"-----------------"<<endl;
    for(int j=0;j<2;j++){
        for(int i=0;i<2;i++){
            if(j%2 == 0){
                cout << arr[i][j]<<" ";
            }
            else{
                cout << arr[1-i][j] << " ";
            }
        }
        // cout<<endl;
    }
    return 0;
}