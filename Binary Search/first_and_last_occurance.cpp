#include<iostream>
using namespace std;

int firstOccurance(int arr[], int size, int key){
    int start = 0;
    int end = size - 1;
    int mid = start + (end-start)/2;
    int ans = -1;
    while(start<=end){
        if (key == arr[mid]){
            ans = mid;
            end = mid - 1;
        }
        else if(key>arr[mid]){
            start = mid +1;
        }
        else if(key<arr[mid]){
            end = mid - 1;
        }
        mid = start + (end-start)/2;
    }
    return ans; 
}

int lastOccurance(int arr[], int size, int key){
    int start = 0;
    int end = size - 1;
    int mid = start + (end-start)/2;
    int ans = -1;
    while(start<=end){
        if (key == arr[mid]){
            ans = mid;
            start = mid + 1;
        }
        else if(key>arr[mid]){
            start = mid +1;
        }
        else if(key<arr[mid]){
            end = mid - 1;
        }
        mid = start + (end-start)/2;
    }

    return ans; 
}

int main(){
    int number[8] = {0,0,1,1,2,2,2,2};
    int size = sizeof(number)/sizeof(int);
    int key = 2;
    int firstOcc = firstOccurance(number, size, key);
    int lastOcc = lastOccurance(number, size, key);
    cout << "First occurance if "<<key<<" is: "<< firstOcc << endl;
    cout << "Last occurance if "<<key<<" is: "<< lastOcc << endl;
    int totalnumOfOcc = (lastOcc-firstOcc)+1;
    cout << "Total number of occurance of "<< key << " is " << totalnumOfOcc << endl;
    return 0; 
}