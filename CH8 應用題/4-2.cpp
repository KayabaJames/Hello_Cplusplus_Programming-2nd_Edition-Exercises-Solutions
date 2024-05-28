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
    cout << "叫m nΑ块m籔nㄢ计" << endl;
    cin >> m >> n;

    cout << "mnㄢ计程そ计gcd" << gcd(m, n) << endl;

    return 0;
}
