/*problem statement
 print all alphabets from a to z using while loop */
/*
method 1
 #include<iostream>
 using namespace std;

 int main(){

     char ch='a';
     cout<<"Alphabets from a to z are :"<<endl;
     while(ch<='z'){
        cout<<ch<<endl;
        ch++;
     }
     return 0;
 }
 */

 //method 2

#include<iostream>
 using namespace std;
 int main(){

     char ch =97;
      cout<<"Alphabets from a to z are :"<<endl;
      while(ch<=122){
        cout<<"\n"<<ch;
        ch++;
      }
      return 0;

 }
