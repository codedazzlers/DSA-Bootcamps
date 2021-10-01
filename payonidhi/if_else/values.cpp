#include <iostream>
using namespace std;
int main() {
   int x = 2;
   int y = 5;
   int z = 0;
   cout<<(x==2)<<endl;
   cout<<(x != 5)<<endl;
   cout<<( x != 5 && y >= 5)<<endl;
   cout<<(z != 0 || x == 2)<<endl;
   cout<<(!(y < 10))<<endl;
   return 0;
}
