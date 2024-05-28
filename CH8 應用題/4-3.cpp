#include <iostream>

using namespace std;

int gcd(int m, int n)
{
    if(n == 0)
        return m;

    return gcd(n, m % n);
}

// a x b = �̤j���]��(gcd) x �̤p������(lcm)
int lcm(int m, int n, int gcd)
{
    return m * n / gcd;
}

int main()
{
    int m, n, GCD;
    cout << "�ХHm n���榡��Jm�Pn��ƪ��ȡG" << endl;
    cin >> m >> n;
    GCD = gcd(m, n);

    cout << "m�Bn��ƪ��̤p������lcm���G" << lcm(m, n, GCD) << endl;

    return 0;
}
