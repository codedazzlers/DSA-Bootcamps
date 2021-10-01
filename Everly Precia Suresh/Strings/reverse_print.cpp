#include <iostream>
#include <string>
using namespace std;
int main(){
    string s;
    cout<<"Enter a string : ";
    getline(cin,s);
    int i;
   for(i=0;s[i]!='\0';i++);
   for(int l=i-1;l>=0;l--){
     cout<<s[l];
   }
 return 0;
}