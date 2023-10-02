#include<iostream>
using namespace std;

char getMaxOccCharacter(string s){
    int arr[26] = {0};
    for(int i=0;i<s.length();i++){
        char ch = s[i];
        int number = 0;
        number = ch - 'a';
        arr[number]++;
    }
    // find maximum occurance chacracter
    int maxi = -1, ans = 0;
    for(int j=0;j<26;j++){
        if(maxi<arr[j]){
            ans = j;
            maxi = arr[j];
        }
    }
    return 'a' + ans;
}

int main(){
    string s;
    cout << "Enter your chararcter: ";
    cin >> s;
    cout<<"Maximum character occuranced in the above string is: "<<getMaxOccCharacter(s);
    return 0;
}