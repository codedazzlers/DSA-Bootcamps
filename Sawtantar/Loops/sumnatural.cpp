#include <iostream>

using namespace std;

int main()  
{  
    int num, count = 1, sum = 0;  
  
   cout<<"Enter the limit: "; 
    cin>>num; 
  
    while(count <= num)  
    {  
     
        {  
            sum = sum + count;  
        }  
        count++;  
    }  
    cout<<"Sum of natural numbers are: "<<sum;  
    return 0;  
}  