#include <iostream>
#include <cmath>

using namespace std;

// 若要檢查i是否為質數，則只需要檢查到根號i即可！
void findAllPrimeNumbersBetweenMandN(int m, int n)
{
    int i;
    for(i = m; i <= n; ++i)
    {
        // 0與1不是質數
        if(i < 2) continue;

        int isPrime = 1;
        for(int j = 2; j <= sqrt(i); ++j)
        {
            if(i % j == 0)
            {
                isPrime = 0;
                break;
            }
        }
        if(isPrime == 1)
            cout << i << " ";
    }
}

int main()
{
    int m, n;
    cout << "Enter the value of m: ";
    cin >> m;
    cout << "Enter the value of n: ";
    cin >> n;
    cout << "Prime numbers between m and n: " << endl;
    if(m <= n)
    {
        findAllPrimeNumbersBetweenMandN(m, n);
    }
    else
    {
        findAllPrimeNumbersBetweenMandN(n, m);
    }
    return 0;
}
