#include <iostream>
using namespace std;

int main(){
    int N;
    cout<<"Enter number= ";
    cin>>N;
    for(int i=1; i<=10; i++){
        cout<<N<<" x "<<i<<" = "<<N*i<<endl;
    }
    return 0;
}