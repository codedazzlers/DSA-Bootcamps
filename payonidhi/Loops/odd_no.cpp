#include <iostream>
using namespace std;
int main() {
  cout<<"All odd numbers between 1 to 100 :-"<<endl;
  int i;
  for(i=1; i<=100; i++){
    if(i%2!=0){
        cout<<i<<endl;
    }
  }
   return 0;
}
