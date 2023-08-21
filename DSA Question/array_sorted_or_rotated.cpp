// Given an array nums, return true if the array was originally sorted in non-decreasing order, then rotated some number of positions (including zero). Otherwise, return false.

// There may be duplicates in the original array.

// Note: An array A rotated by x positions results in an array B of the same length such that A[i] == B[(i+x) % A.length], where % is the modulo operation.

 

// Example 1:

// Input: nums = [3,4,5,1,2]
// Output: true
// Explanation: [1,2,3,4,5] is the original sorted array.
// You can rotate the array by x = 3 positions to begin on the the element of value 3: [3,4,5,1,2].

#include<iostream>
#include<vector>
using namespace std;

int main(){
    int arr[5] = {3,4,5,1,2};
    int count = 0;
    int size = sizeof(arr)/sizeof(int);
    for(int i=1;i<size;i++){
        if(arr[i-1]>arr[i]){
            count++;
        }
    }
    if(arr[size-1]>arr[0]){
        count++;
    }
    if(count<=1){
        cout<<true<<endl;
    }
    else{
        count<<false;
    }
    return 0;
}