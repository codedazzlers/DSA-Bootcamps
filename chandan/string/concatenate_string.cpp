#include <iostream>
using namespace std;

int main(){
char s[100],p[100];
int i;
cout<<"enter 1st string : ";
cin.getline(s,100);

cout<<"enter 2nd string : ";
cin.getline(p,100);

for( i=0;s[i] != '\0';i++);

for(int a=0;p[a] != '\0';a++){
    s[i++] =p[a];
}

s[i] = '\0';
cout<<"after concatenate : "<<s;


return 0;
    
}