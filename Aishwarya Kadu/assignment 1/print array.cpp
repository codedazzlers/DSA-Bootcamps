// C++ Program to print an Array using Recursion

#include <bits/stdc++.h>
using namespace std;
void print_array(int arr[], int size)
{
	static int i;
	if (i == size) {
		i = 0;
		cout << endl;
		return;
	}
	cout << arr[i] << " ";
	i++;
	print_array(arr, size);
}
int main()
{

	int arr[] = { 3, 5, 6, 8, 1 };
	int n = sizeof(arr) / sizeof(arr[0]);

	print_array(arr, n);

	return 0;
}
