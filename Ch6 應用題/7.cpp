# include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cout << "請輸入n x n的二維陣列A，n的大小：";
    cin >> n;

    // 在C++中，陣列的大小必須在編譯時期就確定，不可以在執行期間設定陣列的大小，因此在cin與cout後加上以下寫法是不被允許的
    // 但是我們可以使用std::vector來代替，它可以在執行期間動態調整大小。
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

    cout << "對應的轉置陣列B為：" << endl;

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


