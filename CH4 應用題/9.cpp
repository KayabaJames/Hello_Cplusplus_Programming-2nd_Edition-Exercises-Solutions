#include <bits/stdc++.h>

using namespace std;

int main()
{
    int spend, exchange, a, b, c, d, e, f;

    cin >> spend;
    exchange = 1000 - spend;

    cout << "500��" << ((exchange >= 500)?(exchange / 500):0) << "�i" << endl; //�n�`�N�����A���_�ӡA�_�h�|��error!
    exchange = exchange % 500;
    cout << "100��" << ((exchange >= 100)?(exchange / 100):0) << "�i" << endl;
    exchange = exchange % 100;
    cout << "50��" << ((exchange >= 50)?(exchange / 50):0) << "��" << endl;
    exchange = exchange % 50;
    cout << "10��" << ((exchange >= 10)?(exchange / 10):0) << "��" << endl;
    exchange = exchange % 10;
    cout << "5��" << ((exchange >= 5)?(exchange / 5):0) << "��" << endl;
    exchange = exchange % 5;
    cout << "1��" << ((exchange >= 1)?(exchange / 1):0) << "��" << endl;

    return 0;
}
