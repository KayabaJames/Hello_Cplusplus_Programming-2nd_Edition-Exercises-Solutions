#include <bits/stdc++.h>

using namespace std;

int main()
{
    // ���D�إi���A�}�G�� - 5 = 7�B11�P17�������ơA�B�}�G�Ƥ��W�L5000�C
    int candy, temp;
    for(candy = 0; candy <= 5000; ++candy)
    {
        temp = candy - 5;
        if(temp % 5 == 0 && temp % 11 == 0 && temp % 17 == 0 && candy != 5) // �`�N�ݭn�ư��ߤ@�ҥ~�Gcandy = 5
        {
            cout << candy << endl;
        }
    }

    return 0;
}
