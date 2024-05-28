#include <bits/stdc++.h>

using namespace std;

int main()
{
    char input;

    cin >> input;

    if(input >= 'a' && input <= 'z')
    {
        cout << "¤p¼g¦r¥À" << endl;
    }
    else if(input >= 'A' && input <= 'Z')
    {
        cout << "¤j¼g¦r¥À" << endl;
    }
    else if(input >= '0' && input <= '9')
    {
        cout << "¼Æ¦r" << endl;
    }
    else
    {
        cout << "¯S®í¦r¤¸" << endl;
    }

    return 0;
}
