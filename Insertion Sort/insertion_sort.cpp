#include<iostream>
using namespace std;

void printArray(int arr[], int n){
    for(int i=0;i<n;i++){
        cout<<arr[i];
    }
}

int main(){
    int arr[5] = {4,1,6,7,2};
    int n = sizeof(arr)/sizeof(int);
    for(int i=1;i<n;i++){
        int temp = arr[i];
        int j = i-1;
        for(;j>=0;j--){
            if(arr[j]>temp){
                arr[j+1] = arr[j];
            }
            else
            {
                break;
            }
            
        }
        arr[j+1] = temp;
    }
    printArray(arr, n);
    return 0;
}