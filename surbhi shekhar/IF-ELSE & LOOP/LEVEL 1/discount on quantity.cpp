#include <iostream>

using namespace std;

int main()
{
    double purchase_quant;
    cin >> purchase_quant;
    if ((purchase_quant * 100) > 1000)
    {
        cout << "total cost = " << ((purchase_quant * 100) - (0.1 * purchase_quant * 100)) << endl;
    }
    else
        cout << "no discount" << endl;
    
}
