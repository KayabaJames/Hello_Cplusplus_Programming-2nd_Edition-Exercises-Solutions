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
        cout << "�O�b�ծɶ�" << endl;
    }
    else
    {
        cout << "���O�b�ծɶ�" << endl;
    }


    return 0;
}
