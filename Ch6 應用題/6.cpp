# include <bits/stdc++.h>

using namespace std;

// use the recursion method to print out the nth number of the Fibonacci sequence
int Fibonacci(int n)
{
    if(n == 1 || n == 2)
    {
        return 1;
    }
    else
    {
        return Fibonacci(n - 1) + Fibonacci(n - 2);
    }
}

int main()
{
    int n;
    cout << "請輸入正整數n，將輸出費氏數列第n項的值：";
    cin >> n;

    cout << "費氏數列第" << n << "項的值為：" << Fibonacci(n) << endl;

    return 0;
}
