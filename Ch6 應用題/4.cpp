#include <iostream>

using namespace std;

int main()
{
    const int MAX_SIZE = 1000;
    int numbers[MAX_SIZE];
    int size = 0;
    int num;

    cout << "�п�J�@���ơA�H�Ů���j�A�åH-1�����G" << endl;
    while(cin >> num && num != EOF) // �n��EOF��-1��ܳ��i�H
    {
        if(size < MAX_SIZE)
        {
            numbers[size] = num;
            size++;
        }
        else
        {
            cout << "�w�F��̤j��J�ƶq�A�L�k�A��J��h�Ʀr�C" << endl;
            break;
        }
    }

    cout << "�п�J�t�@�Ӿ�ơG" << endl;
    int lastNum;
    cin >> lastNum;

    int count = 0;
    for (int i = 0; i < size; i++)
    {
        if (numbers[i] > lastNum)
        {
            count++;
        }
    }

    cout << "��" << lastNum << "�j���Ʀr��" << count << "�ӡC" << endl;

    return 0;
}
