#include <iostream>
using namespace std;
int main(){
    int m,n;
    string s1,s2;
    getline(cin,s1);
    getline(cin,s2);
    m=0;
    n=0;
    while(s1[m]&&s2[n]){
        if(s1[m]!=s2[n]){
            cout<<"Not equal";
            return 0;
        }
         m++;n++;
    }
    if(s1[m]=='\0' ^ s2[n]=='\0' == 1){
        cout<<"Not equal";
    }
    else{
    cout<<"Equal";
    }
    return 0;
}

