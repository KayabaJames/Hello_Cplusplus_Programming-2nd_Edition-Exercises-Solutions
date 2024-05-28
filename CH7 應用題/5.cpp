# include <iostream>
# include <cstring>
# include <string>
# include <bits/stdc++.h>

using namespace std;

int main()
{
    string input;
    cout << "Please insert the input: " << endl;
    getline(cin, input);

    int length = input.length();
    int sum = 0, number[length];

    // convert the input string into an array of numbers
    for(int i = 0; i < length; ++i)
    {
        switch(input[i])
        {
            case 'I':
                number[i] = 1;
                break;
            case 'V':
                number[i] = 5;
                break;
            case 'X':
                number[i] = 10;
                break;
            case 'L':
                number[i] = 50;
                break;
            case 'C':
                number[i] = 100;
                break;
            case 'D':
                number[i] = 500;
                break;
            case 'M':
                number[i] = 1000;
                break;
            default:
                cout << "Illegal input. Please try again." << endl;
                return 0;
        }
    }

    // the algorithm of calculating sum
    for(int i = length - 1; i >= 0; --i)
    {
        if(i > 0 && number[i - 1] < number[i])
        {
            sum += number[i] - number[i - 1];
            i--;
        }
        else
        {
            sum += number[i];
        }
    }

    cout << "sum = " << sum << endl;

    return 0;
}
