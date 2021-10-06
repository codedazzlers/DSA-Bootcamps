#include <iostream>
using namespace std;
int main(){
    int i=0,j=0;
    char str1[20],str2[20];
    cin.getline(str1,12);
    cin.getline(str2,12);
    while(str1[i]){
        i=i+1;
    }
    while(str2[j]){
        str1[i]=str2[j];
        i++;
        j++;
    }
    str1[i]='\0';
    cout<<"Concatenated string is " << str1;
}
