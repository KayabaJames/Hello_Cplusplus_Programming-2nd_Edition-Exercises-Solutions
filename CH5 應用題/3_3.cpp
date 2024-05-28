#include <bits/stdc++.h>

using namespace std;

int main()
{
    // 小知識：任意的連續自然數倒數之和永遠不可能是一個整數
    long long int n;
    double result = 0.0;

    cin >> n;

    for(; n > 0; --n)
    {
        result += (1.0 / n); // 必須使用(1.0 / n)而非(1 / n)，否則會被視為整數的運算而被捨去小數點！(所以兩個變數至少其中一個要用浮點數型態表示)
    }

    cout << fixed << setprecision(60) << result;

    return 0;
}
