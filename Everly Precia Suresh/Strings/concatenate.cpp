#include <iostream>
#include <string>
using namespace std;
int main(){
    char s[20],s1[20];
    cout<<"Enter string 1 : ";
    gets(s);
    cout<<"Enter string 2 : ";
    gets(s1);
    
    char res[40];
    int i=0,j=0;
    while (s[i] != '\0') {
        res[j] = s[i];
        i++;
        j++;
    }
  
    // Insert the second string in the new string
    i = 0;
    while (s1[i] != '\0') {
        res[j] = s1[i];
        i++;
        j++;
    }
    res[j] = '\0';
    cout<<"The concatenated string is "<<res<<endl;
    return 0;
}