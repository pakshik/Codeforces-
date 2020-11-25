#include <bits/stdc++.h>
using namespace std;
#define use_fast ios::sync_with_stdio(false), cin.tie(0), cout.tie(0)
#define umii unordered_map<int, int>
#define umic unordered_map<int, char>
#define umci unordered_map<char, int>
#define usi unordered_set<int>
#define usc unordered_set<char>
#define mii map<int, int>
#define mic map<int, char>
#define mci map<char, int>
#define si set<int>
#define sc set<char>
#define ll long long
#define ff first
#define ss second
#define pb push_back
#define mp make_pair
#define pii pair<int, int>
#define vii vector<vector<int>>
#define vi vector<int>
#define pqb priority_queue<int>
#define pqs priority_queue<int, vi, greater<int>>
#define setbits(x) __builtin_popcountll(x)
#define zrobits(x) __builtin_ctzll(x)
#define mod 1000000007
#define inf 1e18
#define ps(x, y) fixed << setprecision(y) << x
#define mk(arr, n, type) type *arr = new type[n];
#define w(x)  \
    int x;    \
    cin >> x; \
    while (x--)
vector<long long > v;
unordered_map<int, int> um;
void SieveOfEratosthenes(long long  n) 
{ 
    // Create a boolean array "prime[0..n]" and initialize 
    // all entries it as true. A value in prime[i] will 
    // finally be false if i is Not a prime, else true. 
    bool prime[n+1]; 
    memset(prime, true, sizeof(prime)); 
  
    for (long long  p=2; p*p<=n; p++) 
    { 
        // If prime[p] is not changed, then it is a prime 
        if (prime[p] == true) 
        { 
            // Update all multiples of p greater than or  
            // equal to the square of it 
            // numbers which are multiple of p and are 
            // less than p^2 are already been marked.
            v.push_back(p);   
            for (long long  i=p*p; i<=n; i += p) 
                prime[i] = false; 
        } 
    } 
} 
  
void primeFactors(long long  n)
{
   for(long long  i= 2  ; i * i <= n  ; i++){

       if(n% i != 0 )
          continue;    
       while( n % i == 0 ){
          n /= i ;  
           um[i]++; 
       }
   }
}

int32_t main()
{
    use_fast;
    int test;
    cin >> test;
    // SieveOfEratosthenes();
    while (test--)
    {
        um.clear();
        ll n;
        cin >> n;
        // cout<<n << endl; 
        primeFactors(n);
        um[n]++;
        long long  max_occ = 0;
        long long  num;
        for (auto x : um)
        {
            if (x.second > max_occ)
            {
                num = x.first;
                max_occ = x.second;
            }
        }
        //  if (um.size() == 1)
        // {
        //     cout << max_occ << endl ;
        //     if (max_occ == 1 ){
        //         cout << n << endl ; 
        //     }else {
        //          for (int i = 0; i < max_occ; i++)
        //         cout << num << " ";
        //     cout << endl;
        //     } 
        // }
        // else
        // {

            cout << max_occ << endl;
            ll  ans = 1;  
            for(int i = 0 ; i < max_occ-1 ; i++ )
             ans = ans * num ;  
            for (int i = 0; i < max_occ - 1; i++)
                cout << num << " ";
        //    cout << n << " " << ans << endl ; 
            cout << n / ans << " ";
            cout << endl;
        // }
    }
    return 0;
}