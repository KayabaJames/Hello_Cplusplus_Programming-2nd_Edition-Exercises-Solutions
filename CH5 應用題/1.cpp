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
            cout << "�O����" << endl;
            break;
        default:
            cout << "���O����" << endl;
    }

    return 0;
}
