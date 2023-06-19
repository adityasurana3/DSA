#include<iostream>
// #include<array>
using namespace std;

int binarySearch(int arr[], int size, int key){
    int start = 0;
    int end =  size - 1;
    int mid = start + (end-start)/2;
    while(start<=end){
        if (arr[mid] == key){
            return mid;
        }
        if (key > arr[mid]){
            start = mid + 1;
        }
        else{
            end = mid - 1;
        }
        mid = start + (end-start)/2;
    }
    return -1;
}

int main(){
    int evenNum[6] = {2,4,8,12,14,16};
    int oddNum[5] = {1,3,5,7,9};
    int key;
    int size = sizeof(oddNum) / sizeof(int);
    cout << "Enter the number to search?: ";
    cin >> key;
    int result = binarySearch(oddNum, size, key);
    cout << result;
}