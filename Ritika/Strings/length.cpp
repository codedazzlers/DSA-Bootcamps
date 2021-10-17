#include<iostream>
using namespace std;
int main()
{

    char str[40];
    cout<<"Enter a String"<<endl;
    cin.getline(str,40);
     int l;
     for(l=0;str[l]!='\0';l++);
     {cout<<"Length of the string is: "<<l;
   } return 0;
}
