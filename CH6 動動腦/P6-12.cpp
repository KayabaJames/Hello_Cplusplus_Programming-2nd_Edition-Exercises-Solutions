# include <bits/stdc++.h>

using namespace std;

int main()
{
    int n = 5;
    int arr[n] = {1, 2, 3, 4, 5};

    // ��X�}�C���̤p��
    int minimum = arr[0];
    for(int i = 0; i < n; i++)
    {
        if(minimum > arr[i])
            minimum = arr[i];
    }

    // ��X�Y�@�}�C�����j��
    int less_max = arr[0];
    int maximum = arr[0];
    for(int i = 0; i < n; i++)
    {
        if(maximum < arr[i])
            less_max = maximum;
            maximum = arr[i];
    }

    cout << "The minimum number of the array is: " << minimum << endl;
    cout << "The less maximum number of the array is: " << less_max << endl;
    return 0;
}
