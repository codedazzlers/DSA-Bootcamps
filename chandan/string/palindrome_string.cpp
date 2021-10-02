#include <iostream>
using namespace std;

int main(){
char s[100];

int i,a;

cout<<"enter string : ";
cin.getline(s,100);

for( i=0;s[i] != '\0';i++);

for(a=0;(a < i/2) && (s[a] == s[i-a-1]);a++);
if(a == i/2){
    cout<<"palindrome string";
}
else{
    cout<<"not palindrome sring";
}
    

return 0;
    
}