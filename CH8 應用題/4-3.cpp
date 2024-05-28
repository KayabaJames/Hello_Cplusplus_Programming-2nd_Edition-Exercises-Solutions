#include <iostream>

using namespace std;

int gcd(int m, int n)
{
    if(n == 0)
        return m;

    return gcd(n, m % n);
}

// a x b = 程そ计(gcd) x 程そ计(lcm)
int lcm(int m, int n, int gcd)
{
    return m * n / gcd;
}

int main()
{
    int m, n, GCD;
    cout << "叫m nΑ块m籔nㄢ计" << endl;
    cin >> m >> n;
    GCD = gcd(m, n);

    cout << "mnㄢ计程そ计lcm" << lcm(m, n, GCD) << endl;

    return 0;
}
