#include<iostream>
using namespace std;
int main()
{
    int arr[100], freq[100];
    int size, i, j, count;
    cout<<"Enter size of array: "<<endl;
    cin>>size;
    cout<<"Enter elements in array: "<<endl;
    for(i=0; i<size; i++)
    {
        cin>>arr[i];
        freq[i] = -1;
    }


    for(i=0; i<size; i++)
    {
        count = 1;
        for(j=i+1; j<size; j++)
        {

            if(arr[i]==arr[j])
            {
                count++;
                freq[j] = 0;
            }
        }


        if(freq[i] != 0)
        {
            freq[i] = count;
        }
    }


    cout<<"Frequency of all elements of array : "<<endl;
    for(i=0; i<size; i++)
    {
        if(freq[i] != 0)
        {
            cout<<arr[i]<<"  occurs  "<<freq[i]<<" times."<<endl;
        }
    }

    return 0;
}
