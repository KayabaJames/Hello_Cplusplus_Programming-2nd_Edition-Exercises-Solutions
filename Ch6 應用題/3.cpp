# include <bits/stdc++.h>

using namespace std;

int main()
{
    int number = 0;
    cin >> number;
    int input[number] = {};

    for(int i = 0; i < number; ++i)
    {
        cin >> input[i];
    }

    int largest_number = input[0];
    int largest_index = 0;

    // find maximum number in the array
    for(int i = 0; i < number; ++i)
    {
        if(largest_number < input[i])
        {
            largest_number = input[i];
            largest_index = i;
        }
    }

    cout << "硂﹃计程计" << largest_number << endl;
    cout << "计瞷竚" << largest_index << endl;

    return 0;
}
