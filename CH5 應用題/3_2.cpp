#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, addend; //addend�G�[��
    long long int result = 0;

    cin >> n;

    for(; n > 0; --n)
    {
        // �����P�_n�O�����٬O�_�ơA�Q��(n & 1)�����G�A�p�G�B�⵲�G��1�h�N���_�ơA0�h�����ơC
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
