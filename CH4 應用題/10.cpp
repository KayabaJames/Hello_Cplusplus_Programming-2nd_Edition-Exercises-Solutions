#include <bits/stdc++.h>

using namespace std;

int main()
{
    float cm, m, kg, BMI;
    int flag;
    cin >> cm >> kg;

    m = cm * 0.01;
    BMI = kg / (m * m);

    flag = BMI * 100;

    /*if(BMI < 18.5)
    {
        cout << "�L��" << endl;
    }
    if(BMI >= 18.5 && BMI < 24)
    {
        cout << "���`�d��" << endl;
    }
    if(BMI >= 24 && BMI < 27)
    {
        cout << "�L��" << endl;
    }
    if(BMI >= 27 && BMI < 30)
    {
        cout << "���תέD" << endl;
    }
    if(BMI >= 30 && BMI < 35)
    {
        cout << "���תέD" << endl;
    }
    if(BMI >= 35)
    {
        cout << "���תέD" << endl;
    }*/

    // �]��switch�����int���O�ӭ���d��A�]���i�H����쥻��float�ȭ��W100�A�A�Hint�ȨӤ���I
    switch(flag)
    {
        case 0 ... 1849:
            cout << "�L��" << endl;
            break;
        case 1850 ... 2399:
            cout << "���`�d��" << endl;
            break;
        case 2400 ... 2699:
            cout << "�L��" << endl;
            break;
        case 2700 ... 2999:
            cout << "���תέD" << endl;
            break;
        case 3000 ... 3500:
            cout << "���תέD" << endl;
            break;
        default:
            cout << "���תέD" << endl;
    }

    return 0;
}
