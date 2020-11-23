#include<bits/stdc++.h>

using namespace std;

const int MOD = 998244353;
long long  add(long long  a , long long  b )
{
   return (a %MOD + b %MOD )%MOD;
}

// long long  add(long long  x, long long  y)
// {
//     x += y;
//     while(x >= MOD) x -= MOD;
//     while(x < 0) x += MOD;
//     return x;
// }

long long  mul(long long  x, long long  y)
{
    return (x * 1ll * y) % MOD;
}

long long  binpow(long long  x, long long  y)
{
    long long  ans = 1;
    while(y > 0)
    {
        if(y % 2 == 1)
            ans = mul(ans, x);
        x = mul(x, x);
        y /= 2;
    }
    return ans;
}

long long  divide(long long  x, long long  y)
{
    return mul(x, binpow(y, MOD - 2));
}
int main()
{
    long long  n;
    cin >> n;
    vector<long long > fib(n + 1);
    fib[0] = 0;
    fib[1] = 1;
    for(int i = 2; i <= n; i++)
        fib[i] = add(fib[i - 1], fib[i - 2]);
    cout << divide(fib[n], binpow(2, n)) << endl;    
}