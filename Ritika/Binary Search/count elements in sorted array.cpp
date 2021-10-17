#include<iostream>
using namespace std;
int first (int arr[], int x, int n)
{

    int low=0, high=n-1, res=-1;
    while(low<=high)
    {
        int mid = low +(high-low)/2;
        if (arr[mid]==x)
           {res = mid;
            high = mid-1;}
        else if (arr[mid]>x)
            high = mid-1;

        else
        {
          low = mid +1;
        }
        }
        return res;

}
int last(int arr[], int x, int n)
{

    int low=0, high=n-1, res=-1;
    while(low<=high)
    {
        int mid = low +(high-low)/2;
        if (arr[mid]==x)
            {res = mid ;
            low = mid+1; }

        else if (arr[mid]>x)
            high = mid-1;

        else
        {
           low = mid +1;
        }
        }
        return res;

}
int main()
{

    int arr[]={2,4,10,10,10,18,20,20};
    int n = sizeof(arr)/sizeof(int);
    int x =10;
    int f = first(arr,x,n);
    int l = last(arr,x,n);


    int count = l -f +1;
    cout<<x <<" occurs  "<<count<<" times."<<endl;
    return 0;

}
