#include <iostream>
using namespace std;
int main()
{int ar1[5]={1,2,3,4,5};
  int length = sizeof(ar1)/sizeof(ar1[0]);  
  int ar2[length];
int i;
    for(i=0;i<5;i++)
      {ar2[i] = ar1[i];
      }

 for (int i = 0; i < length; i++) {   
cout<<ar2[i]<<" "<<endl;
}
 return 0;
 
}
