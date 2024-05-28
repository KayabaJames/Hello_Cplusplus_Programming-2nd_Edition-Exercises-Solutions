// �ڭ̥i�ѵ��G�o�{�A�b�N�r����ASCII�X�P��Ƴs��g�L�⦸XOR�B���A���G�N�O�쥻�r����ASCII�X�C
#include <bits/stdc++.h>

using namespace std;

int main()
{
    char c;
    int num, trans_char;

    cin >> c >> num;
    trans_char = c;
    cout << ( (trans_char ^= num) ^= num ) << endl;

    return 0;
}
