#include <iostream>
using namespace std;
int main(){
    int i=0;
    string s1;
    getline(cin,s1);
    while(s1[i]){
        i=i+1;
    }
    for(int j=0;j<=(i-1)/2;j++){
        if(s1[j]!=s1[i-1-j]){
            cout<<"Not a palindrome";
            return 0;
        }
    }
    cout<<"Is a Palindrome";
    return 0;
}
