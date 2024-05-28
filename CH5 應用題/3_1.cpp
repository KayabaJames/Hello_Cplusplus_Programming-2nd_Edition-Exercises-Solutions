#include <bits/stdc++.h>

using namespace std;

int main()
{
    unsigned long long int result = 1;
    long long int n;

    cin >> n;
    for(; n > 0; --n)
    {
        result *= n;
    }
    cout << result << endl;

    return 0;
}
