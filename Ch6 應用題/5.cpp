# include <bits/stdc++.h>

using namespace std;

int main()
{
    int length = 0;
    cout << "�п�J�Yn�Ӿ�ƧǦC�����סG";
    cin >> length;

    int input[length] = {};

    // store the input into the array
    cout << "�п�J����ƧǦC�G";
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
        cout << "����J��" << length << "�Ӿ�ơA�ݩ�jolly jumper�C" << endl;
    }
    else
    {
        cout << "����J��" << length << "�Ӿ�ơA���ݩ�jolly jumper�C" << endl;
    }


    return 0;
}
