#include <bits/stdc++.h>

using namespace std;

int main()
{
    /* �p����(���D�Τ���)�G�p�G�@�Ӧ۵M�ƪ��Ҧ���ƩM = 9(��9������)�A����o�ӼƤ@�w�O9�����ơC
       �P�z�A�p�G�ڥu���D�Y�Ƭ�9�����ơA�h�Ӽƪ��C�Ӧ�ƪ��M�]�@�w��Q9�㰣�C
       �o�өʽ�]�A�Ω�3�C
    */

    for(int i = 1; i <= 10000; ++i) // �]10000��
    {
        int sum = 0;
        int temp = i;
        while(temp > 0)
        {
            sum += temp % 10;
            temp /= 10;
        }

        if(sum == 9)
        {
            cout << i << endl;
        }
    }

    return 0;
}
