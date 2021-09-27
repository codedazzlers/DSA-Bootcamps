#include <iostream>
using namespace std;

int main()
{
   char character;
   
    cout<<"Enter a character:"<<endl;
    cin>>character;

    if(character>=97 && character <=122 )
      {
        cout<<"Entered character is Lowercase!"<<endl;
      }
      else if(character>=65 && character <=91)
      {
        cout<<"Entered character is Uppercase!"<<endl;   
      }

    return 0;
}