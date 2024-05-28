#include <bits/stdc++.h>

using namespace std;

int main()
{
    int hr, minute, time;

    cin >> hr >> minute;
    time = hr * 60 + minute;

    // 7 * 60 + 50 = 470; 16 * 60 + 30 = 990
    if (time >= 470 && time <= 990)
    {
        cout << "是在校時間" << endl;
    }
    else
    {
        cout << "不是在校時間" << endl;
    }


    return 0;
}
