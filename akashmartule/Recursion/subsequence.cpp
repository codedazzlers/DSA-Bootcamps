#include<bits/stdc++.h>
using namespace std;
void getSubSequence(string str, int strIndex, string output)
 {
    //  Base condition
    if(strIndex==str.length()){
        cout<<output<<endl;
        return;

    }
    // nahi lena
    getSubSequence(str, strIndex+1, output);

    // lena hai output mein
    output.push_back(str[strIndex]);
    getSubSequence(str , strIndex+1, output);
 }

 int main()
 {
  string str;
  cout<<"Enter string: "<<endl;
  cin>>str;

 cout<<"Subsequences of the gives string are: "<<endl;
 string output="";
 getSubSequence(str,0,output);
 

 }
 