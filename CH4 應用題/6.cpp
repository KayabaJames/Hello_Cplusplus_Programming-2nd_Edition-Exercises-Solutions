#include <bits/stdc++.h>

using namespace std;

int main()
{
    int km, money = 65;
    cin >> km;

    if (km > 1000) //�Y�W�L1000����
    {
        money += (km - 1000) / 500 * 5; //�h�C500���إ[��5��

        if ( (km - 1000) % 500 > 0) //�N������500���ت�����
        {
            money += 5; //����500���ت������A�H500���حp��A�G�[5��
        }
    }

    cout << money << endl;

    return 0;
}
