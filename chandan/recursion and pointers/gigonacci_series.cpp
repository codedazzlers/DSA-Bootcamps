#include <iostream>
using namespace std;

int geek_onacci(int a,int b,int c,int n){
    
    int p=a+b+c;
    a=b;
    b=c;
    c=p;
    if(n<=4){
        return p;
    }
    else{
        geek_onacci(a,b,c,n-1);
    }
}



int main() {
    int t;
    cin>>t;
    while(t){
        int a,b,c,n;
        cin>>a>>b>>c>>n;
        cout<<geek_onacci(a,b,c,n)<<endl;
        t--;
    }
    
	//code
	return 0;
}