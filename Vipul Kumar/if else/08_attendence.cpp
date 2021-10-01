#include<iostream>
using namespace std;

int main()
{
int number_of_attended_classes;
cin>>number_of_attended_classes;
int number_of_held_classes;
cin>>number_of_held_classes;
float percentage=(number_of_attended_classes/number_of_held_classes)*100;
if (percentage>75)
{
    cout<<"you can sit in examination";
}
else
{
    cout<<"you can't sit in examination";
}


return 0;
}