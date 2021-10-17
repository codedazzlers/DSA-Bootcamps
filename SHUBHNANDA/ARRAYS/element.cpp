#include <iostream>
using namespace std;
int main()
{
int a[100]={1,2,3,4,5};
 int pos,num,i;
 cout<<"enter the position and number"<<endl;
 cin>>pos>>num;
 for(i=4;i>=pos;i++)
  {a[i+1]=a[i];
  a[pos]=num;
  }
 for(i=0;i<6;i++)
  {cout<<a[i]<<" ";
  
  }
return 0;
}
