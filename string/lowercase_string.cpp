#include <iostream>
using namespace std;

int main(){
char s[100];
int i;
cout<<"enter string : ";
cin.getline(s,100);

for( i=0;s[i] != '\0';i++){
    s[i] = (s[i] >= 'A' && s[i] <= 'Z') ? (s[i]+32) : s[i];
}
    cout<<"lowercase string is : "<<s;


return 0;
    
}