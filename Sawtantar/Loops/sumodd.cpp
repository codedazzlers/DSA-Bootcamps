#include <iostream>

using namespace std;

int main()  
{  
    int num, count = 1, sum = 0;  
  
   cout<<"Enter the limit: "; 
    cin>>num; 
  
    while(count <= num)  
    {  
        if(count%2 != 0)  
        {  
            sum = sum + count;  
        }  
        count++;  
    }  
    cout<<"Sum of odd numbers are: "<<sum;  
    return 0;  
}  