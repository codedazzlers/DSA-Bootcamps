#include <iostream>
using namespace std;

int main(){
char s[100];


int no=0;

cout<<"enter string : ";
cin.getline(s,100);

for( int i=0;s[i] != '\0';i++){
    if(s[i] == ' '){
        no++;
    }
}
    cout<<"total words is : "<<no+1<<endl;


return 0;
    
}