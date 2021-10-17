#include <iostream>
using namespace std;
int main(){
    int i=0;
    string s1;
    getline(cin,s1);
    while(s1[i]){
        if(s1[i]>=97 && s1[i]<=122){
            s1[i]=65+(s1[i]-97);
        }
        i++;
    }
    cout<<"string in upper case: "<<s1;
    return 0;
}
