#include <iostream>
using namespace std;

int main(){
    char str1[80];
    cout<<"enter string 1 ";
    cin.getline(str1, 80);

    char str2[80];
    cout<<"enter string 2 ";
    cin.getline(str2, 80);

    int i;
    for(i=0; str1[i]==str2[i] && str1[i]!='\0' && str2[i]!='\0'; i++);
        if(str1[i]-str2[i]==0){
            cout<<"string are equal";
        }
        else{
            cout<<"string are not equal";
        }

    return 0;
}