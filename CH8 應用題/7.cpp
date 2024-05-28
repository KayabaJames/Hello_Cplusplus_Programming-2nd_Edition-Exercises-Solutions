#include <iostream>

using namespace std;

// 找出所有能整除整數n的整數和(包括1，但不包括本身)
int findNumbersSum(int number)
{
    int sum = 0;
    for(int j = (number - 1); j > 0; --j)
    {
        if(number % j == 0)
            sum += j;
    }

    return sum;
}

// 找出friend numbers，這題的意思應該是說，找出所有A和B的配對，使得A的所有能整除整數和等於B，且B的所有能整除整數和等於A
void findFriendNumbers(int limit)
{
    for(int i = 1; i <= limit; ++i)
    {
        int sum1 = findNumbersSum(i);
        if(sum1 <= limit && sum1 > i)
        {
            int sum2 = findNumbersSum(sum1);
            if(sum2 == i)
            {
                cout << "找到一對friend numbers： " << i << " 和 " << sum1 << endl;
            }
        }
    }
}

int main()
{
    findFriendNumbers(500);

    return 0;
}
