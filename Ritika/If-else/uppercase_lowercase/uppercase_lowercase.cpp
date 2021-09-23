#include <iostream>

using namespace std;

int main()
{
    char c;
    cout<<"Enter a character:"<<endl;
    cin>>c;
    int x=(int)c;
    if(c>=97 && c<=122){
        cout << "lowercase" << endl;
    }
    else if(c>=65 && c<=90){
        cout << "uppercase" << endl;
    }

    else
    {
        cout<<"Character is invalid"<<endl;
    }
    return 0;
}
