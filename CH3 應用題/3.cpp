#include <bits/stdc++.h>

using namespace std;

int main()
{
    int initial_payment, final_payment, discount;

    cin >> initial_payment;

    discount = 100 * (initial_payment / 1000);
    final_payment = initial_payment - discount;

    cout << final_payment << endl;

    return 0;
}
