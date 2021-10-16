#include <iostream>
#include <cstdio>

int main() {
    float dp, total_cost, final_cost, d= .10;
    int q, p = 100;
    std::cin >> q;
    total_cost = q * p;
    if (total_cost > 1000) {
        dp = total_cost * d;
        final_cost = total_cost - dp;
        printf("Final Prize = %.2f\n", final_cost);
    }
    else
        printf("Final Prize = %.2f\n", total_cost);

    return 0;
}