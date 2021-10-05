#include <iostream>
using namespace std;

int main(){
    char str[80];
    cout<<"enter string ";
    cin.getline(str,80);

    char str2[80];
    cout<<"enter string 2 ";
    cin.getline(str2,80);

    int l;
    for(l=0; str[l]!='\0';l++);
    int i, j;
    for(i=0,j=0; str[i]!='\0' && str2[j]!='\0';i++,j++){
        if(str[i]==str2[j]){
            j++;
        }
        else{
            j=0;
        }
    }
    if (l==l)
    cout<<"substring is present at "<<i-j+1;
    else
    cout<<"substing missing ";
    return 0;
}