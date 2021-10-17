// C++ program to find sum of array elements using recursion.
#include <stdio.h>
int findSum(int A[], int N)
{
	if (N <= 0)
		return 0;
	return (findSum(A, N - 1) + A[N - 1]);
}
int main()
{
	int A[] = { 1, 2, 3, 4, 5 };
	int N = sizeof(A) / sizeof(A[0]);
	printf("%dn", findSum(A, N));
	return 0;
}
