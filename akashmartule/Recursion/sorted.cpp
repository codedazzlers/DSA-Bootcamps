#include<bits/stdc++.h>
using namespace std;
bool checkSorted(vector<int>arr, int index)
{
    if(index>=arr.size()){
     return true;
    }
   
    if(arr[index]<arr[index-1])
      return false;

    return checkSorted(arr,index+1);
}

int main()
{
    cout<<"Enter the size of array"<<endl;
    int n;
    cin>>n;

    vector<int>arr(n);
    cout<<"Enter elements: "<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    bool answer=checkSorted(arr,1);
    if(answer)
    cout<<"array is sorted"<<endl;
    else
     cout<<"array is not sorted"<<endl;
}

