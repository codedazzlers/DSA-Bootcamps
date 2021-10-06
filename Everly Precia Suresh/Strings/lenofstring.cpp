#include <iostream>
#include <string>
using namespace std;
int main(){
    string s;
    cout<<"Enter a string : ";
    getline(cin,s);
    int length=0;
for(int i=0;s[i]!='\0';i++){
    length++;
}
   cout<<"The length of string is : " <<length<<endl;
    return 0;
}