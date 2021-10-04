#include <iostream>
#include <string>
using namespace std;
int main(){
    string s;
    cout<<"Enter a string : ";
    getline(cin,s);
    int words=0;
    for(int i=0; s[i]!='\0';i++){
        if(s[i]==' '){
            words++;
        }
    }
    cout<<"Word Count: "<<words+1<<endl;
return 0;
}