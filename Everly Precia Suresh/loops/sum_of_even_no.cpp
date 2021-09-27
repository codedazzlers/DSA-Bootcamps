#include <iostream>
using namespace std;
int main(){
    int sum=0;
    int N;
    cout<<"Enter N Value: ";
    cin>>N;
    for(int i=1;i<=N;i++){
     if(i%2==0){
     sum+=i;
     }
    }
    cout<<"Sum of all even numbers between 1 to "<<N<<" is "<<sum<<endl;
    return 0;
}