#include <iostream>
using namespace std;
int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    int oldest,youngest;
    if(a>b){
        if(a>c){
            oldest=a;
            if(c>b) youngest=b;
            else youngest=c;
        }
        else{
            oldest=c;
            youngest=b;
        }
    }
    else{
        if(b>c){
            oldest=b;
            if(c>a) youngest=a;
            else youngest=c;
        }
        else{
            oldest=c;
            youngest=a;
        }
    }
    cout << "oldest=" << oldest << endl;
    cout << "youngest=" << youngest << endl;
    
}
