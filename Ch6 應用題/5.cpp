# include <bits/stdc++.h>

using namespace std;

int main()
{
    int length = 0;
    cout << "請輸入某n個整數序列的長度：";
    cin >> length;

    int input[length] = {};

    // store the input into the array
    cout << "請輸入此整數序列：";
    for(int i = 0; i < length; ++i)
    {
        cin >> input[i];
    }

    // check if the array is the jolly jumoer
    int flag = 0;
    for(int i = 1; i < length; ++i)
    {
        int difference_front = input[i + 1] - input[i];
        int difference_back = input[i] - input[i - 1];

        if(difference_front < 0)
        {
            difference_front *= (-1);
        }
        if(difference_back < 0)
        {
            difference_back *= (-1);
        }

        if(difference_front - difference_back == 1)
        {
            flag = 1;
        }
    }

    if(flag == 1)
    {
        cout << "此輸入的" << length << "個整數，屬於jolly jumper。" << endl;
    }
    else
    {
        cout << "此輸入的" << length << "個整數，不屬於jolly jumper。" << endl;
    }


    return 0;
}
