#include <bits/stdc++.h>

using namespace std;

int main()
{
    int number, x1, x2, x3, x4, x5, x6, odd_sum, even_sum, result; // x6為最高位，x1為最低位

    cin >> number;
    x1 = number % 10;
    number /= 10;
    x2 = number % 10;
    number /= 10;
    x3 = number % 10;
    number /= 10;
    x4 = number % 10;
    number /= 10;
    x5 = number % 10;
    number /= 10;
    x6 = number % 10;
    number /= 10;

    odd_sum = x1 + x3 + x5;
    even_sum = x2 + x4 + x6;
    result = odd_sum - even_sum;

    cout << result << endl;

    return 0;
}
