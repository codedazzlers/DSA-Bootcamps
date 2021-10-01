#include <iostream>
using namespace std;
int main(){
    int i=0;
    char t;
    string s1;
    getline(cin,s1);
    while(s1[i]){
        i=i+1;
    }
    for(int j=0;j<=(i-1)/2;j++){
            t=s1[j];
            s1[j]=s1[i-1-j];
            s1[i-1-j]=t;
    }
    cout<<"Reversed string: "<<s1;
    return 0;
}
