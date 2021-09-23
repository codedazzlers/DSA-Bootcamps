#include <iostream>
using namespace std;
int main()
{
    int num;
    long long product=1ll;

    cout<<"Enter any number to calculate product of digit: "<<endl;
    cin>>num;

    product = (num == 0 ? 0 : 1ll);

    /* Repeat the steps till num becomes 0 */
    while(num != 0)
    {
        product = product * (num % 10);
        num = num / 10;
    }

   cout<<"product of digits is " <<product<<endl;
    return 0;
}
