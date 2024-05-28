#include <bits/stdc++.h>

using namespace std;

int main()
{
    int spend, exchange, a, b, c, d, e, f;

    cin >> spend;
    exchange = 1000 - spend;

    cout << "500元" << ((exchange >= 500)?(exchange / 500):0) << "張" << endl; //要注意必須括號起來，否則會跳error!
    exchange = exchange % 500;
    cout << "100元" << ((exchange >= 100)?(exchange / 100):0) << "張" << endl;
    exchange = exchange % 100;
    cout << "50元" << ((exchange >= 50)?(exchange / 50):0) << "個" << endl;
    exchange = exchange % 50;
    cout << "10元" << ((exchange >= 10)?(exchange / 10):0) << "個" << endl;
    exchange = exchange % 10;
    cout << "5元" << ((exchange >= 5)?(exchange / 5):0) << "個" << endl;
    exchange = exchange % 5;
    cout << "1元" << ((exchange >= 1)?(exchange / 1):0) << "個" << endl;

    return 0;
}
