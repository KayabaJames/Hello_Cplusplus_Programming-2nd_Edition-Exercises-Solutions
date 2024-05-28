#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;

    switch (n / 4)
    {
        case 1: cout << "pass: " << n << endl;
        case 2: n = 2 * n;  cout << "case 2: " << n << endl; break;
        case 3: n += 5; cout << "case 3: " << n << endl;
        default: n++; cout << "default: " << n << endl;
    }
    cout << n << endl;

    return 0;
}
