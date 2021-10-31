#include <iostream>
using namespace std;

void mergeArr(int arr1[], int arr2[], int s1, int s2, int arr3[], int s3)
{
    int i = 0, j = 0, k = 0;
    while (i < s1 && j < s2)
    {
        if (arr1[i] < arr2[j])
        {
            arr3[k] = arr1[i];
            i++;
            k++;
        }
        else
        {
            arr3[k] = arr2[j];
            j++;
            k++;
        }
    }
    while (i < s1)
    {
        arr3[k] = arr1[i];
        i++;
        k++;
    }
    while (j < s2)
    {
        arr3[k] = arr2[j];
        j++;
        k++;
    }
}

int main()
{

    int s1, s2;
    cout << "Enter size of 1st array : " << endl;
    cin >> s1;
    cout << "Enter size of 2nd array : " << endl;
    cin >> s2;
    int s3 = s1 + s2;
    int arr1[s1], arr2[s2], arr3[s3];
    cout << "Enter elements in 1st array : " << endl;
    for (int i = 0; i < s1; i++)
    {
        cin >> arr1[i];
    }
    cout << "Enter elements in 2nd array : " << endl;
    for (int i = 0; i < s2; i++)
    {
        cin >> arr2[i];
    }
    mergeArr(arr1, arr2, s1, s2, arr3, s3);
    cout << "Merged array is :" << endl;
    for (int k = 0; k < s3; k++)
    {
        cout << arr3[k] << " ";
    }
    return 0;
}