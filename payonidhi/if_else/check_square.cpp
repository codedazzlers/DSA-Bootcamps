#include <iostream>
using namespace std;
int main() {
   int l,b;
   cout<<"Enter the values of length and breadth :"<<endl;
   cin>>l>>b;
   if(l==b){
       cout<<"This is s square!";
   }
   else
   cout<<"This is not a square but a rectangle!";
   return 0;
}
