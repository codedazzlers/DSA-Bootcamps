#include <iostream>

using namespace std;

int main()
{
    double purchase_quantity;
    cin >> purchase_quantity;
    if ((purchase_quantity * 100) > 1000)
    {
        std::cout << "total cost = " << ((purchase_quantity * 100) - (0.1 * purchase_quantity * 100)) << std::endl;
    }
    else
        std::cout << "no discount" << std::endl;
    return 0;
}
