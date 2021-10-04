#include <iostream>
#include <string>
using namespace std;
int main(){
   string s;
   cout<<"Enter a string : ";
   getline(cin,s);
   int i;
   for(i=0;s[i]!='\0';i++);
   int j;
   char temp;
   for(int l=0,j=i-1;l<i/2;l++,j--){
       temp=s[l];
       s[l]=s[j];
       s[j]=temp;
   }
   cout<<"The Reverse String : "<<s<<endl;
   return 0;
}