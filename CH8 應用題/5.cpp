#include <iostream>

using namespace std;

// a x b = 程そ计(gcd) x 程そ计(lcm)
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
    cout << "叫a b cΑ块ab籔c计" << endl;
    cin >> a >> b >> c;
    GCD = gcd(gcd(a, b), c);

    cout << "abc计程そ计lcm" << lcm(a, b, c, GCD) << endl;

    return 0;
}

