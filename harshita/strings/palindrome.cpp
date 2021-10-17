#include<iostream>
#include<string.h>
using namespace std;
int main()
{
        string str;
        int i, k=0;
        int flag = 0;    
        cout<< "Enter string : " ;
        cin>>str;
        while(str[k]!= 0){
        k++;
    }
        for(i=0;i < k ;i++)
        {
                if(str[i] != str[k-i-1])
                {
                        flag = 1;
                        break;
                }
        }    
        if(flag)
        {
                cout<<" "<<str<<" is not a palindrome";
        }    
        else
        {
                cout<<" "<<str<< " is a palindrome";
        }
        return 0;
}
