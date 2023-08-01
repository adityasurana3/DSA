#include<iostream>
using namespace std;

int mergeArray(int arr1[], int n, int arr2[], int m, int arr3[]){

    int i = 0;
    int j = 0;
    int k = 0;
    while (i<n && j<m)
    {
        if(arr1[i]<arr2[j]){
            arr3[k] = arr1[i];
            k++;
            i++;
        }
        else{
            arr3[k] = arr2[j];
            k++;
            j++;
        }
    }
    
    while (i<n)
    {
        arr3[k] = arr1[i];
        i++;
        k++;
    }

    while (j<m)
    {
        arr3[k] = arr2[j];
        j++;
        k++;
    }


}

int main(){
    int arr1[5] = {1,3,4,5,9};
    int arr2[3] = {2,7,8};
    int arr3[8] = {0};
    int n = sizeof(arr3)/sizeof(int);
    mergeArray(arr1, 5, arr2, 3, arr3);

    for(int i =0;i<n;i++){
        cout << arr3[i];    
    }
    return 0;
}