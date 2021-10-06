//cpp program to merge two sorted array
//time complexity O(size of largest array) and space O(size1+size2)

#include <iostream>
using namespace std;

int main()
{
    
    int size1, size2, mergeSize;
    int index1, index2, mergeIndex;
    int i;
     
    /* Input size of first array */
   cout<<"Enter the size of first array : ";
    cin>>size1;

   int arr1[size1];
    /* Input elements in first array */
   cout<<"Enter elements in first array : ";
    for(i=0; i<size1; i++)
    {
        cin>>arr1[i];
    }

    /* Input size of second array */
   cout<<"\nEnter the size of second array : ";
    cin>>size2;

    int arr2[size2];

    /* Input elements in second array */
   cout<<"Enter elements in second array : ";
    for(i=0; i<size2; i++)
    {
        cin>>arr2[i];
    }

 
    mergeSize = size1 + size2;
    int mergeArray[mergeSize];

    /*
     * Merge two array in ascending order 
     */
    index1 = 0;
    index2 = 0;
    for(mergeIndex=0; mergeIndex < mergeSize; mergeIndex++)
    {
        /* 
         * If all elements of one array 
         * is merged to final array
         */
        if(index1 >= size1 || index2 >= size2)
        {
            break;
        }


        if(arr1[index1] < arr2[index2])
        {
            mergeArray[mergeIndex] = arr1[index1];
            index1++;
        }
        else
        {
            mergeArray[mergeIndex] = arr2[index2];
            index2++;
        }
    }

    /*
     * Merge remaining array elements
     */
    while(index1 < size1)
    {
        mergeArray[mergeIndex] = arr1[index1];
        mergeIndex++;
        index1++;
    }
    while(index2 < size2)
    {
        mergeArray[mergeIndex] = arr2[index2];
        mergeIndex++;
        index2++;
    }


    /* 
     * Print merged array
     */
   cout<<"\nArray merged in ascending order : ";
    for(i=0; i<mergeSize; i++)
    {
       cout<<mergeArray[i]<<" ";
    }

    return 0;
}