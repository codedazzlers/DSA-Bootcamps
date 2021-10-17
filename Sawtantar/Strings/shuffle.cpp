#include <bits/stdc++.h>
using namespace std;
 
void Convertstrings(string s, int index[],
                              int n)
{
    char a[s.length()];
    char b[s.length()];
     
    for(int ii = 0; ii < s.length(); ii++)
    {
        a[ii] = s[ii];
        b[ii] = s[ii];
    }
     
    int i = 0, j = 0;
     
    while(j < s.length() && i < n)
    {
        int k = index[i];
        int temp = a[j];
        b[k] = temp;
         
        j += 1;
        i += 1;
    }
     
    string tmp = "";
     
    for(i = 0; i < s.length(); i++)
    {
        tmp += b[i];
    }
 
    cout << tmp << endl;
}
 
int main()
{
    string s = "codeleet";
    int index[] = { 4, 5, 6, 7, 0, 2, 1,
                   3};
     
    int n = sizeof(index) / sizeof(index[0]);
     
    Convertstrings(s, index, n);
    return 0;
}