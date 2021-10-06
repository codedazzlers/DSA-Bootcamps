#include <iostream>
using namespace std;

int main(){
    char str1[80];
    cout<<"enter string 1 ";
    cin.getline(str1, 80);

    char str2[80];
    cout<<"enter string 2 ";
    cin.getline(str2, 80);

    int l;
    for(l=0; str1[l] !='\0';l++);

    for(int i=0; str2[i]!= '\0';i++){
        str1[l++]=str2[i];
    }
    cout<<"new string is "<<str1;

    //str1[l] = '\0';
return 0;

}