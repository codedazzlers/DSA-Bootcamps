/* Problem statement
Write a program to check whether a entered character is lowercase ( a to z ) or uppercase ( A to Z ).
Hint:You can use ASCII value to do so.
*/

#include<iostream>

using namespace std;
int main()
{
    char c;
    cin>>c;
    int x=(int)c;
    if(c>=97 && c<=122){
        cout<< "lowercase" << endl;
    }
    else if(c>=65 && c<=90){
        cout<< "uppercase" <<endl;
    }
    return 0;
}
