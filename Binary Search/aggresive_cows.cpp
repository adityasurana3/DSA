#include<iostream>
#include <bits/stdc++.h>
using namespace std;

bool isPossible(int arr[], int k, int mid, int n){
    int cowCount = 1;
    int lastPos = arr[0];
    for(int i =0;i<n;i++){
        if(arr[i]-lastPos>=mid){
            cowCount++;
            if(cowCount == k){
                return true;
            }
            lastPos = arr[i];
        }
    }
    return false;
}

int main(){
    int arr[5] = {4, 2, 1, 3, 6};
    int n = sizeof(arr) / sizeof(arr[0]);
    sort(arr, arr + n);
    int start = 0;
    int maxi = -1;
    int k = 2; //Number ofcows
    int ans = -1;
    int getArrayLength = sizeof(arr) / sizeof(int); //number of stalls
    int arrSize = getArrayLength;
    for(int i =0;i<getArrayLength;i++){
        maxi = max(maxi, arr[i]);
    }
    int end = maxi;
    int mid = start + (end-start)/2;
    while (start<=end)
    {
        if(isPossible(arr, k, mid, arrSize)){
            ans = mid;
            start = mid+1;
        }
        else{
            end = mid - 1;
        }
        mid = start + (end-start)/2;

    }
    cout << ans;
    return 0;
}