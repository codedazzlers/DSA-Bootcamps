#include <iostream>
using namespace std;

#define MAX_SIZE 100

int main()
{
    int arr[MAX_SIZE];
    int i, size, even, odd;

    cout<<"Enter the size of an array:"<<endl;
    cin>>size;


   cout<<"Enter the elements of an array: "<<endl;
    for(i=0; i<size; i++)
    {
      cin>>arr[i];
    }


    even = 0;
    odd  = 0;

    for(i=0; i<size; i++)
    {

        if(arr[i]%2 == 0)
        {
            even++;
        }
        else
        {
            odd++;
        }
    }

   cout<<"Total number of even elements are: "<<even<<endl;
   cout<<"Total number of odd elements are: "<<odd<<endl;


    return 0;
}
