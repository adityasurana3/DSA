#include<iostream>
using namespace std;

int peakElement(int arr[], int size){
    int start = 0;
    int end = size - 1;
    int mid = start + (end-start)/2;

    while(start<end){
        if(arr[mid]<arr[mid+1]){
            start = mid + 1;
        }
        else{
            end = mid;
        }
        mid = start + (end-start)/2;
    }
    return arr[start];
}

int main(){
    int ele[3] = {1,3,1};
    int size = sizeof(ele)/sizeof(int);
    int peakEle =  peakElement(ele, size);
    cout << "Peak element is "<< peakEle << endl;
}