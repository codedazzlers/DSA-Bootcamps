#include <iostream>
using namespace std;

int main(){
char s[100],p[100];

cout<<"enter 1st string : ";
cin.getline(s,100);

cout<<"enter 2nd string : ";
cin.getline(p,100);
int x;

for(x=0;p[x] != '\0';x++);
int a,b;
for( a=0,b=0;s[a] != '\0' && p[b] != '\0';a++){

    if(s[a] == p[b]){
        b++;
    }
    else{
        b=0;
    }
}

if(b == 1){
    cout<<"substring found at : "<<a-b+1;
}
else{
    cout<<"not found";
}


return 0;
    
}