#include <iostream>
using namespace std;
int main()
{
int a[100]={1,2,3,4,5};
 int pos,num,i;
 cout<<"enter the position "<<endl;
 cin>>pos;
 for(i=pos;i>=pos;i++)
  {a[i]=a[i+1];
}
      num= a[pos];
  
 for(i=0;i<6;i++)
  {cout<<a[i]<<" ";
  
  }
return 0;
}
