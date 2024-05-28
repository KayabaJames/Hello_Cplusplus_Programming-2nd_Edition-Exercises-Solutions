#include <iostream>

using namespace std;

int main()
{
    const int MAX_SIZE = 1000;
    int numbers[MAX_SIZE];
    int size = 0;
    int num;

    cout << "請輸入一串整數，以空格分隔，並以-1結束：" << endl;
    while(cin >> num && num != EOF) // 要用EOF或-1表示都可以
    {
        if(size < MAX_SIZE)
        {
            numbers[size] = num;
            size++;
        }
        else
        {
            cout << "已達到最大輸入數量，無法再輸入更多數字。" << endl;
            break;
        }
    }

    cout << "請輸入另一個整數：" << endl;
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

    cout << "比" << lastNum << "大的數字有" << count << "個。" << endl;

    return 0;
}
