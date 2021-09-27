#include <iostream>
#define MAX_SIZE 1000
using namespace std;

void Array(int arr[], int len)
{
    int i;
    cout<<"Elements in the array: "<<endl;
    for(i=0; i<len; i++)
    {
        cout<<arr[i];
    }
    cout<<"\n";
}
int main()
{
    int e_Cou, o_Cou;
    int i, size;

    /* Input size of the array */
    cout<<"Enter size of the array: "<<endl;
    cin>>size;
    
    int arr[MAX_SIZE];
    int even[MAX_SIZE], odd[MAX_SIZE];
    
    /* Input elements in array */
    cout<<"Enter elements in the array: "<<endl;
    for(i=0; i<size; i++)
    {
        cin>>arr[i];
    }

    e_Cou = 0;
    o_Cou = 0;

    for(i=0; i<size; i++)
    {
        // If arr[i] is odd
        if(arr[i] & 1)
        {
            odd[o_Cou] = arr[i];
            o_Cou++;
        }
        else
        {
            even[e_Cou] = arr[i];
            e_Cou++;
        }
    }

    cout<<"\nElements of even array: \n"<<endl;
    Array(even, e_Cou);

    cout<<"\nElements of odd array: \n"<<endl;
    Array(odd, o_Cou);

    return 0;
}
