#include<iostream>
using namespace std;

int main( )
{
    char str[80];

    cout<<"Enter string: ";
    cin.getline(str, 80);

    int l; //Hold length of string
    for(l = 0; str[l] != '\0'; l++);    //finding length of string

    int temp;
    int low =0;
    int high=l-1;
    while(low<high)
    {

        temp = str[low];
        str[low] = str[high];
        str[high] = temp;
        low++ ;
        high --;
    }
    cout << "Reverse string: " << str << endl;

    return 0;
}
