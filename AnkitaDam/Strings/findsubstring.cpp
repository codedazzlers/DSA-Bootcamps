#include <iostream>
using namespace std;
int main(){
    int i=0,j=0;
    string s1,s2;
    getline(cin,s1);
    getline(cin,s2);
    while(s1[i]){
        i=i+1;
    }
    while(s2[j]){
        j=j+1;
    }
    int p,q;
    for(p=0,q=0;s1[p]&&s2[q];p++){
        if(s1[p]==s2[q]){
            q++;
        }
        else{
            q=0;
        }
    }
    if(q==j){
        cout<<"Substring found at index(starting from 0) "<<p-q;
    }
    else{
        cout<<"Substring not found";
    }
    return 0;
}
