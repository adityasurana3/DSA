#include<iostream>
using namespace std;

int pivotElement(int size, int arr[]){
    int start = 0;
    int end = size-1;
    int mid = start + (end-start)/2;
    while (start<end)
    {
        if(arr[mid] >= arr[0]){
            start = mid+1;
        }
        else{
            end = mid;
        }
        mid = start + (end-start)/2;
    }
    return start;
}

int main(){
    int arr[5] = {7,9,1,2,3};
    int size = 5;
    int start = 0;
    int index=pivotElement(size, arr);
    cout << "Pivot Element is in index: "<< index;
    return 0;
}