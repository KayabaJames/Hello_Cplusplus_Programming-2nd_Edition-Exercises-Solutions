#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    int a, b, c, d, e, f; // 500 100 50 10 5 1

    cin >> n;

    a = n / 500;
    n %= 500;
    b = n / 100;
    n %= 100;
    c = n / 50;
    n %= 50;
    d = n / 10;
    n %= 10;
    e = n / 5;
    n %= 5;
    f = n;

    cout << a << " " << b << " " << c << " " << d << " " << e << " " << f << endl;

    return 0;
}
