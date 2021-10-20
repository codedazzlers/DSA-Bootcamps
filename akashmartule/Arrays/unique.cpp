#include<iostream>>
using namespace std;
int main()
{
    int arr[50],freq[50];
    int i,j,size,count;

    cout<<"number of elements in array :";
    cin>>size;
    cout<<"enter elements in array:  ";
    for(i=0;i<size;i++){
       cin>>arr[i];
       freq[i]=-1;           
    }
    /* Find frequency of each element */
    for(i=0;i<size;i++);{
    count=1;
       
      for(j=i+1; j<size; j++)
        {
            if(arr[i] == arr[j])
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
         /* Print all unique elements of array */

         for(i=0;i<size;i++){
             if(freq[i]==1){
               cout<<arr[i]<<" ";
             }
         }
         return 0;
         
}