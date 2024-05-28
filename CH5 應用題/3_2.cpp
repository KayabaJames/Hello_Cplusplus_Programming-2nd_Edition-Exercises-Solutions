#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, addend; //addend计
    long long int result = 0;

    cin >> n;

    for(; n > 0; --n)
    {
        // 耞n琌案计临琌计ノ(n & 1)挡狦狦笲衡挡狦1玥计0玥案计
        if(n & 1)
        {
            addend = n;
        }
        else
        {
            addend = (-n);
        }

        result += addend;
    }

    cout << result << endl;

    return 0;
}
