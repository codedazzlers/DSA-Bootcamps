#include <iostream>

using namespace std;
int count(string s)
{
    int i = 0;
    while (s[i])
    {
        i++;
    }
    return i;
}
int main1()
{
    char s[100];
    cout<<"Enter a sentence: ";
    cin.getline(s, 100);
    int space = 0;
    cout<<"Number of Words in a sentence is: ";
    for (int i = 0; i < count(s); i++)
    {
        if (s[i] == ' ')
            space++;
    }
    cout << space + 1;
    return 0;
}