#include <iostream>
using namespace std;

int main()
{
    int age1, age2, age3, youngest, oldest;

    
    cout << " Enter the three numbers :  \n\n\n";
    cin >> age1 >> age2 >> age3;

    youngest = age1;
    oldest = age2;

    if (age2 < youngest)
    {
        youngest = age2;
    }

    else if  (age3 < youngest)
    {
        youngest = age3;
    }
    if (age3 > oldest)
    {
        oldest = age3;
    }

    else if (age2 > oldest)
    {
        oldest = age2;
    }

    cout << "The youngest number is : " << youngest<<endl;
    cout << "The oldest number is : " << oldest<<endl;

    return 0;
}
