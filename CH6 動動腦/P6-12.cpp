# include <bits/stdc++.h>

using namespace std;

int main()
{
    int n = 5;
    int arr[n] = {1, 2, 3, 4, 5};

    // 找出陣列的最小值
    int minimum = arr[0];
    for(int i = 0; i < n; i++)
    {
        if(minimum > arr[i])
            minimum = arr[i];
    }

    // 找出某一陣列的次大值
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
