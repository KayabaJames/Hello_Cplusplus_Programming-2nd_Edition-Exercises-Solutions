# include <bits/stdc++.h>

using namespace std;

int main()
{
    int n = 5;
    int arr[n] = {1, 2, 3, 4, 5};
    int inverse_copypasta[n] = {};

    // copy array
    for(int i = 0; i < n; ++i)
    {
        inverse_copypasta[i] = arr[i];
    }

    // inverse array
    for(int i = 0; i < (n / 2); ++i)
    {
        int temp = inverse_copypasta[i];
        inverse_copypasta[i] = inverse_copypasta[n - 1 - i];
        inverse_copypasta[n - 1 - i] = temp;
    }

    // print result
    for(int i = 0; i < 5; ++i)
    {
        cout << "inverse_copypasta[" << i << "] = " << inverse_copypasta[i] << endl;
    }

    return 0;
}
