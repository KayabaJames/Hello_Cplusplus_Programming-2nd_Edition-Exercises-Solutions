#include <bits/stdc++.h>

using namespace std;

int main()
{
    double pi = 0.0, addend;

    for(int i = 1; i <= 1000; ++i) // �]1000��
    {
        addend = 4.0 / (2 * i - 1);
        if(!(i & 1)) //�p�Gi�O����
        {
            addend = (-addend);
        }

        pi += addend;
    }

    cout << fixed << setprecision(60) << pi << endl;

    return 0;
}
