#include <iostream>

using namespace std;

int gcd(int m, int n)
{
    if(n == 0)
        return m;

    return gcd(n, m % n);
}

int main()
{
    int m, n;
    cout << "�ХHm n���榡��Jm�Pn��ƪ��ȡG" << endl;
    cin >> m >> n;

    cout << "m�Bn��ƪ��̤j���]��gcd���G" << gcd(m, n) << endl;

    return 0;
}
