# include <iostream>
# include <cstring>
# include <string>
# include <bits/stdc++.h>

using namespace std;

int main()
{
    // store the input into a string named "input"
    string input;
    cout << "Please insert the input: " << endl;
    getline(cin, input);

    // copy the content of the string "input" into another string and reverse it
    string reversedString = input;
    reverse(reversedString.begin(), reversedString.end());

    // judge if the input is a palindrome
    cout << ((reversedString == input) ? "它是迴文。" : "它不是迴文。") << endl;

    return 0;
}

