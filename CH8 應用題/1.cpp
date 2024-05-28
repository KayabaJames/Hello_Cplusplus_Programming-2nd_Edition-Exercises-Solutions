#include <iostream>

using namespace std;

int getSign(int number)
{
    if(number > 0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    int number;
    cin >> number;
    cout << "The sign value of " << number << " is: " << getSign(number) << endl;

    return 0;
}
