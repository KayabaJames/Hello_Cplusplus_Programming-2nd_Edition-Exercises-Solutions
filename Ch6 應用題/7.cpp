# include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cout << "�п�Jn x n���G���}�CA�An���j�p�G";
    cin >> n;

    // �bC++���A�}�C���j�p�����b�sĶ�ɴ��N�T�w�A���i�H�b��������]�w�}�C���j�p�A�]���bcin�Pcout��[�W�H�U�g�k�O���Q���\��
    // ���O�ڭ̥i�H�ϥ�std::vector�ӥN���A���i�H�b��������ʺA�վ�j�p�C
    // int A[n][n] = {};
    // int B[n][n] = {};
    vector<vector<int>> A(n, vector<int>(n));
    vector<vector<int>>B(n, vector<int>(n));

    for(int i = 0; i < n; ++i)
    {
        for(int j = 0; j < n; ++j)
        {
            cin >> A[i][j];
            B[j][i] = A[i][j];
        }
    }

    cout << "��������m�}�CB���G" << endl;

    for(int i = 0; i < n; ++i)
    {
        for(int j = 0; j < n; ++j)
        {
            cout << B[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}


