#include<iostream>
using namespace std;

char toLowerCase(char ch){
    if(ch >= 'a' && ch <= 'z'){
        return ch;
    }
    else{
        char temp = ch - 'A'+'a';
        return temp;
    }
}

int get_length(char name[]){
    int count = 0;
    for(int i=0;name[i]!='\0';i++){
        count++;
    }
    return count;
}

void reverse_string(char name[], int lenth){
    int start = 0;
    int end = lenth -1;
    while (start<end)
    {
        swap(name[start++], name[end--]);
    }
    
}

int palindrome(char name[], int length){
    int start = 0;
    int end = length-1;
    while (start<=end)
    {
        if(toLowerCase(name[start]) != toLowerCase(name[end])){
            return 0;
        }
        else{
            start++;
            end--;
        }
    }
    return 1;   
}

int main(){

    char name[20];
    cout<<"Enter your name: ";
    cin >> name;
    cout<< name<<endl;

    int length = get_length(name);
    cout<<length<<endl;

    reverse_string(name, length);
    cout<<name<<endl;

    cout<< "Palindrome or not: "<< palindrome(name, length)<<endl;

    return 0;
}