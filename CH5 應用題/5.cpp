#include <bits/stdc++.h>

using namespace std;

int main()
{
    /* 醚(セ肈ノぃ)狦礛计┮Τ计㎝ = 9(┪9计)ê或硂计﹚琌9计
       瞶狦и笵琘计9计玥赣计–计㎝﹚砆9俱埃
       硂┦借続ノ3
    */

    for(int i = 1; i <= 10000; ++i) // 禲10000Ω
    {
        int sum = 0;
        int temp = i;
        while(temp > 0)
        {
            sum += temp % 10;
            temp /= 10;
        }

        if(sum == 9)
        {
            cout << i << endl;
        }
    }

    return 0;
}
