#include <iostream>
using namespace std;
int main()
{ int a,b,att;
  cout<<"enter no. of classes"<<endl;
  cout<<"enter no. of classes attended"<<endl;
  cin>>a>>b;
  att=100*(a%b);
  if(att<75)
    cout<<"not allowed to attend ";
  else
   cout<<"allowed to attend",att;
 return 0;
}
