#include<iostream>
using namespace std;

int main()
{
	int i, j, rows, columns, count = 1;
	
	cout << "\nPlease Enter the Matrix rows and Columns =  ";
	cin >> i >> j;
	
	int a[i][j], b[i][j];
	
	cout << "\nPlease Enter the Symmetric Matrix Items\n";
	for(rows = 0; rows < i; rows++)	
	{
		for(columns = 0; columns < i; columns++) 
		{
			cin >> a[rows][columns];
		}		
	}
	
	for(rows = 0; rows < i; rows++)	
	{
		for(columns = 0; columns < i; columns++) 
		{
			b[columns][rows] = a[rows][columns];
		}		
	}
 	
	for(rows = 0; rows < i; rows++)
  	{
  		for(columns = 0; columns < j; columns++)
  		{
  			if(a[rows][columns] !=b[rows][columns])
  			{
  				count++;
  				break;
			}
		}
  	}

 	if(count == 1)
  	{
  		cout << "\nThe Matrix you have entered is a Symmetric Matrix";
	}
	else
	{
		cout << "\nThe Matrix you have entered is Not a Symmetric Matrix";
	}  	

 	return 0;
}