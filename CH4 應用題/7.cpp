#include <bits/stdc++.h>

using namespace std;

int main()
{
    //original money and final money
    int orimon;
    float finmon;
    cin >> orimon;

    if (orimon >= 10000 && orimon < 50000)
    {
        finmon = orimon * 0.95;
    }
    else if (orimon >= 50000 && orimon < 100000)
    {
        finmon = orimon * 0.9;
    }
    else if (orimon >= 100000 && orimon < 150000)
    {
        finmon = orimon * 0.85;
    }
    else if (orimon >= 150000)
    {
        finmon = orimon * 0.8;
    }
    else
    {
        finmon = orimon;
    }

    cout << finmon << endl;

    return 0;
}
