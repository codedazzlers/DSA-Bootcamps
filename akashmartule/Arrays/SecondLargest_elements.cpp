#include <iostream>
#include<climits>
using namespace std;

int main() {

    int n, i;
    
    cout << "Enter number of elements in an array ";
    cin  >> n;
    
    int arr[n];
    
    cout << "Enter values in an array ";
    
    //Input array elements
    for (i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    //Assign min value to max and second_max
    int max         = INT_MIN;
    int second_max  = INT_MIN;
    
    
    for (i = 0; i < n; i++) {
        
        if(arr[i] > max) {
            second_max = max;
            max        = arr[i];
        }
        else{
        if(arr[i] < max && arr[i] > second_max) {
            second_max = arr[i];
        }
        }
    }
    
    cout <<"Second highest number in an unsorted array is " << second_max;
    
    return 0;
}