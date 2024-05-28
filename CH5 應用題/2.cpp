#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long int input = 0;
    int sum = 0;

    cin >> input;
    while(input > 0)
    {
        sum += (input % 10);
        input /= 10;
    }
    cout << sum << endl;

    return 0;
}
