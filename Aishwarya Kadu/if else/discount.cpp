#include <iostream>
int main()
{
	using namespace std;
	int quantity,price;
	cout << "Enter quantity" << endl;
	cin >> quantity;
	price = quantity*100;
	if (price>1000){
		cout << "Total cost is " << price-(price*.1) << endl;
	}
	else{
		cout << "Total cost is " << price << endl;
	}
	return 0;
}