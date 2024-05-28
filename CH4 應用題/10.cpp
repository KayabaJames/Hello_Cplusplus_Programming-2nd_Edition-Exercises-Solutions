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
        cout << "過輕" << endl;
    }
    if(BMI >= 18.5 && BMI < 24)
    {
        cout << "正常範圍" << endl;
    }
    if(BMI >= 24 && BMI < 27)
    {
        cout << "過重" << endl;
    }
    if(BMI >= 27 && BMI < 30)
    {
        cout << "輕度肥胖" << endl;
    }
    if(BMI >= 30 && BMI < 35)
    {
        cout << "中度肥胖" << endl;
    }
    if(BMI >= 35)
    {
        cout << "重度肥胖" << endl;
    }*/

    // 因為switch不能用int型別來限制範圍，因此可以先把原本的float值乘上100，再以int值來比較！
    switch(flag)
    {
        case 0 ... 1849:
            cout << "過輕" << endl;
            break;
        case 1850 ... 2399:
            cout << "正常範圍" << endl;
            break;
        case 2400 ... 2699:
            cout << "過重" << endl;
            break;
        case 2700 ... 2999:
            cout << "輕度肥胖" << endl;
            break;
        case 3000 ... 3500:
            cout << "中度肥胖" << endl;
            break;
        default:
            cout << "重度肥胖" << endl;
    }

    return 0;
}
