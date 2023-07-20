#include <iostream>
using namespace std;

int squareRoot(int num){
    int start = 0;
    int end = num;
    int mid = start + (end-start)/2;
    int ans = -1;
    while (start<=end)
    {
        int square = mid*mid;
        if (square==num){
            return mid;
        }
        if(square<num){
            ans =mid;
            start = mid+1;
        }
        else{
            end = mid-1;
        }
        mid = start + (end-start)/2;
    }
    return ans;
}

double morePrecision(int n, int precision, int tempsolution){
    double ans = tempsolution;
    double factor = 1;
    for(int i=0; i<precision;i++){
        factor = factor/10;
        for(double j=ans; j*j<n; j=j+factor){
            ans = j;
        }
    }
    return ans;
}

int main(){
    int number;
    cout << "Enter the number to find the square root of: ";
    cin >> number;
    int tempSolution = squareRoot(number);
    double sqrt = morePrecision(number, 3, tempSolution);
    cout << "Square root of "<< number <<" is "<<sqrt;
    // cout << sqrt;
    return 0;
}