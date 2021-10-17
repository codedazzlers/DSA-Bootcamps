/*problem statement
Write a program to print absolute vlaue of a number entered by user. E.g.-
INPUT: 1        OUTPUT: 1
INPUT: -1        OUTPUT: 1
*/

#include<iostream>

using namespace std;
int main(){

int num;
cout<<"enter any number:";
cin>>num;
if(num>=0)
    cout<<num;
else
    cout<<-num;

return 0;
}
