#include <bits/stdc++.h>

using namespace std;

int main()
{
    // 由題目可知，糖果數 - 5 = 7、11與17的公倍數，且糖果數不超過5000。
    int candy, temp;
    for(candy = 0; candy <= 5000; ++candy)
    {
        temp = candy - 5;
        if(temp % 5 == 0 && temp % 11 == 0 && temp % 17 == 0 && candy != 5) // 注意需要排除唯一例外：candy = 5
        {
            cout << candy << endl;
        }
    }

    return 0;
}
