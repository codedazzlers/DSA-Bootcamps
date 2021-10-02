#include <iostream>
using namespace std;

int main(){
char s[100];
int a,b;
cout<<"enter string : ";
cin.getline(s,100);

for( a=0;s[a] != '\0';a++);

for(int i=0;i<a/2;i++){
    b=s[i];
    s[i]=s[a-i-1];
    s[a-i-1]=b;
    
}
cout<<"reverse string   :   "<<s<<endl;


return 0;
    
}