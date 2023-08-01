#include<iostream>
using namespace std;

int main(){
    int arr[6] = {1,0,3,4,0,9};
    int n = sizeof(arr)/sizeof(int);
    int i = 0;
    for(int j=0;j<n;j++){
        if(arr[j] != 0){
            swap(arr[j], arr[i]);
            i++;
        }
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<endl;
    }
    return 0;
}