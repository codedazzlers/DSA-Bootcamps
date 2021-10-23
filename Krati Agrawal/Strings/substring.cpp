#include<iostream>
#include<string>
using namespace std;

int main(){
    string str, sub;
    cout<<"Enter string = ";
    getline(cin,str);
    cout << "Enter substring = ";
    getline(cin, sub);
    int l=0; //hold length of substring
    for(l=0; sub[l]!=0;l++);  //find length of substring
    int i,j;
    for (i = 0, j = 0; str[i] != '\0' && sub[j] != '\0'; i++)
    {
        if (str[i] == sub[j])
        {
            j++;
        }
        else
        {
            j = 0;
        }
    }

    if (j == l)
        cout << "Substring found at position " << i - j + 1;
    else
        cout << "Substring not found";

    return 0;
}