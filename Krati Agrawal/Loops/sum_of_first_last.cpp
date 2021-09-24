#include<iostream>
using namespace std;

int main(){
    int N, f=0, l;
    cout<<"Enter a number= ";
    cin>>N;
    l= N%10;
    while(N!=0){
        f=N%10;
        N=N/10;
    }
    cout<<"sum of first and last digit of given number is = "<<f+l<<endl;
    return 0;
}