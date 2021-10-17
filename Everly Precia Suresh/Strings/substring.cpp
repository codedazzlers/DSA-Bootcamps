#include <iostream>
#include <string>
using namespace std;
int main(){
    string s,s1;
    cout<<"Enter a string 1: ";
    getline(cin,s);
    cout<<"Enter a string 2: ";
    getline(cin,s1);
    int l;
   for(l=0;s1[l]!='\0';l++);
   int i,j;
   for(i=0,j=0;s[i]!='\0' && s1[j]!='\0';i++){
       if(s[i]==s1[j]){
           j++;
       }
       else{
           j=0;
       }
   }
   if(j==l)
   cout<<"Substring found at  position : "<<i-j+1<<endl;
   else
   cout<<"Substring not found";
   return 0;
}