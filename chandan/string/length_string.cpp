#include <iostream>
using namespace std;

int main(){
char s[100];
int i;
cout<<"enter string : ";
cin.getline(s,100);

for( i=0;s[i] != '\0';i++);
    cout<<"length is : "<<i;


return 0;
    
}