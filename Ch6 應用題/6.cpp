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
    cout << "�п�J�����n�A�N��X�O��ƦC��n�����ȡG";
    cin >> n;

    cout << "�O��ƦC��" << n << "�����Ȭ��G" << Fibonacci(n) << endl;

    return 0;
}
