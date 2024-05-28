#include <iostream>
#include <cmath>

using namespace std;

double multiplier = 1;

double moneyCalculate(double r, int n)
{
    multiplier *= (1 + (r / 365));

    if(n > 0)
        return moneyCalculate(r, (n - 1));
    return multiplier;
}

int main()
{
    double r = 0.05;
    double x;
    int n;

    cout << "現在年利率為5%！" << endl;
    cout << "請以x n輸入本金x，以及天數n：" << endl;
    cin >> x >> n;

    cout << "在n天後，存款變成了：" << x * moneyCalculate(r, n) << endl;

    return 0;
}
