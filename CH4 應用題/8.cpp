#include <bits/stdc++.h>

using namespace std;

int main()
{
    char input;

    cin >> input;

    if(input >= 'a' && input <= 'z')
    {
        cout << "�p�g�r��" << endl;
    }
    else if(input >= 'A' && input <= 'Z')
    {
        cout << "�j�g�r��" << endl;
    }
    else if(input >= '0' && input <= '9')
    {
        cout << "�Ʀr" << endl;
    }
    else
    {
        cout << "�S��r��" << endl;
    }

    return 0;
}
