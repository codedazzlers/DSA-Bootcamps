#include <iostream>

using namespace std;
#include <stdio.h>
  
int main()
{
  
    
    char str1[100] = "Hi", str2[100] = " Friend!!!";
  
   
    char str3[100];
  
    int i = 0, j = 0;
  
    cout<<"\nFirst string:"<<str1<<" ";
   cout<<"\nSecond string:"<<str2<<" ";
  

    while (str1[i] != '\0')
    {
        str3[j] = str1[i];
        i++;
        j++;
    }
  
    i = 0;
    while (str2[i] != '\0') 
    {
        str3[j] = str2[i];
        i++;
        j++;
    }
    str3[j] = '\0';
  
   cout<<"\nConcatenated string:"<<str3<<" ";
  
    return 0;
}