#include <iostream>
using namespace std;
int main(){
    int i=0,n=0;
    string str;
    getline(cin,str);
    while(str[i]){
        if(str[i]==' ')
            n++;
        i=i+1;
    }
    cout <<"Number of words are:" <<n+1;
}
