#include <iostream>

using namespace std;

// a x b = �̤j���]��(gcd) x �̤p������(lcm)
int gcd(int m, int n)
{
    if(n == 0)
        return m;

    return gcd(n, m % n);
}

int lcm(int a, int b, int c, int gcd)
{
    return a * b * c / gcd;
}

int main()
{
    int a, b, c, GCD;
    cout << "�ХHa b c���榡��Ja�Bb�Pc�T�ƪ��ȡG" << endl;
    cin >> a >> b >> c;
    GCD = gcd(gcd(a, b), c);

    cout << "a�Bb�Bc�T�ƪ��̤p������lcm���G" << lcm(a, b, c, GCD) << endl;

    return 0;
}

