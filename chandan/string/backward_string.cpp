#include <iostream>
using namespace std;

int main(){
char s[100];
int a;
cout<<"enter string : ";
cin.getline(s,100);

for( a=0;s[a] != '\0';a++);

for(int i=a-1;i >= 0; i--){
    cout<<s[i];
}


return 0;
    
}