# include <iostream>
# include <cstring>
# include <string>
# include <bits/stdc++.h>

using namespace std;

bool canBeFormedByRemovingChars(string str1, string str2)
{
    int j = 0;
    for(int i = 0; i < str2.length() && j < str1.length(); i++)
    {
        if (str1[j] == str2[i])
        {
            j++;
        }
    }
    return (j == str1.length());
}

int main()
{
    string input1, input2;
    cout << "Please insert the first string: " << endl;
    getline(cin, input1);
    cout << "Please insert the second string: " << endl;
    getline(cin, input2);

    if (canBeFormedByRemovingChars(input1, input2))
    {
        cout << "The first string can be formed by removing some characters from the second string." << endl;
    }
    else
    {
        cout << "The first string cannot be formed by removing some characters from the second string." << endl;
    }

    return 0;
}
