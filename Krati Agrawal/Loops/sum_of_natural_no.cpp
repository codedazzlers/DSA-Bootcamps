#include<iostream>
using namespace std;

int main(){
    int sum=0, N;
    cout<<"Enter value of N= ";
    cin>>N;
    for(int i=1; i<= N; i++){
        sum= sum+i;
    }
    cout<<"Sum of all natural numbers from 1 to "<<N<<" is= "<<sum;

    return 0;
}