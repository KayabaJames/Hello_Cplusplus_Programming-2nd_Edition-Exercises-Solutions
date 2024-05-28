#include <bits/stdc++.h>

using namespace std;

int main()
{
    int km, money = 65;
    cin >> km;

    if (km > 1000) //若超過1000公尺
    {
        money += (km - 1000) / 500 * 5; //則每500公尺加收5元

        if ( (km - 1000) % 500 > 0) //代表有不足500公尺的部分
        {
            money += 5; //不足500公尺的部分，以500公尺計算，故加5元
        }
    }

    cout << money << endl;

    return 0;
}
