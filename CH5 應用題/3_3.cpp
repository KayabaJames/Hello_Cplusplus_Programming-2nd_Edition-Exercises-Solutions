#include <bits/stdc++.h>

using namespace std;

int main()
{
    // �p���ѡG���N���s��۵M�ƭ˼Ƥ��M�û����i��O�@�Ӿ��
    long long int n;
    double result = 0.0;

    cin >> n;

    for(; n > 0; --n)
    {
        result += (1.0 / n); // �����ϥ�(1.0 / n)�ӫD(1 / n)�A�_�h�|�Q������ƪ��B��ӳQ�˥h�p���I�I(�ҥH����ܼƦܤ֨䤤�@�ӭn�ίB�I�ƫ��A���)
    }

    cout << fixed << setprecision(60) << result;

    return 0;
}
