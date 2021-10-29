#include <iostream>
using namespace std;
bool reach(int a, int b, int c, int d)
{
	if(d==0)
	{
		if(a==c)
			return true;

		return false;
	}

	return reach(a+b, b, c, d-1) || reach(a-b, b, c, d-1);
}

int main() {
	//code
	 int t;
    cin >> t;
    while(t--)
    {
    	int a, b, c, d;

    	cin >> a >> b >> c >> d;

    	if(reach(a, b, c, d))
    		cout << "yes\n";
    	else
    		cout << "no\n";
    }

	return 0;
}