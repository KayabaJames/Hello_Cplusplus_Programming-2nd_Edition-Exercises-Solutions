# include <iostream>
# include <cstring>
# include <string>
# include <bits/stdc++.h>

using namespace std;

int main()
{
    string input;
    cout << "Please insert the input: " << endl;
    int sum = 0;
    while(getline(cin, input))
    {
        string number = "";
        for(char c : input)
        {
            if (isdigit(c))
            {
                number += c;
            }
        }
        if(!number.empty())
        {
            sum += stoi(number);
        }
    }
    cout << "The sum is: " << sum << endl;

    return 0;
}
