#include <iostream>
using namespace std;

int main(){
char s[100],p[100];
int i;
cout<<"enter 1st string : ";
cin.getline(s,100);

cout<<"enter 2nd string : ";
cin.getline(p,100);

for( i=0;s[i] == p[i] && s[i] != '\0' && p[i] != 0;i++);


 if(s[i] - p[i] == 0){
        cout<<"string equal";

    }
    else{
        cout<<"not equal";
    }

return 0;
    
}