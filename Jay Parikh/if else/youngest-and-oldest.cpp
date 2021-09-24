#include <iostream>
using namespace std;

int main(){
    int a,b,c;
    cout<<"Enter the age of three people\n";
    cin>>a>>b>>c;
    if(a>b && a>c){
        cout<<a<<" is oldest \n";

    }
    else if(a<b && b>c){
        cout<<b<<" is oldest \n";

    }
    else if(a<c && b<c){
        cout<<c<<" is oldest \n ";

    }
    if(a<b && a<c){
        cout<<a<<" is youngest \n";

    }
     else if(b<a && b<c){
        cout<<b<<" is youngest \n";

    }
     else if(c<a && c<b){
        cout<<c<<" is youngest \n";

    }
    return 0;
}