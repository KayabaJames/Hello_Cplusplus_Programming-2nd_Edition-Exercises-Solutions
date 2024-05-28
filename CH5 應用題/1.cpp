#include <bits/stdc++.h>

using namespace std;

int main()
{
    char input;

    cin >> input;
    switch(input)
    {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':
            cout << "是母音" << endl;
            break;
        default:
            cout << "不是母音" << endl;
    }

    return 0;
}
