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

    cout << "�{�b�~�Q�v��5%�I" << endl;
    cout << "�ХHx n��J����x�A�H�ΤѼ�n�G" << endl;
    cin >> x >> n;

    cout << "�bn�ѫ�A�s���ܦ��F�G" << x * moneyCalculate(r, n) << endl;

    return 0;
}
