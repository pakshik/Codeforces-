#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
using namespace __gnu_pbds;
using namespace std;
#define umii unordered_map<int , int>
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
vector<int> edge;
long long tp(long long x){
        return ((x%mod + mod)%mod);
    }
    long long add(long long a, long long b){
        return tp(tp(a)+tp(b));
    }
    long long mul(long long a, long long b){
        return tp(tp(a)*tp(b));
    }
ll dfs(vector<vector<ll>> &adj  , ll u, ll v, ll n)
{
    ll ans = 1;
    for (ll x : adj[u])
    {
        if (x != v )
        {
            ll nt = dfs(adj, x, u, n);
            edge.push_back(((nt%mod) * (n - nt)%mod)%mod);
            ans += nt;
        }
    }
    return ans;
}
int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        edge.clear();
        ll n;
        cin >> n;
        vector<vector<ll>> adj(n);
        for (ll i = 0; i < n - 1; i++)
        {
            ll a, b;
            cin >> a >> b;
            a--;
            b--;
            adj[a].push_back(b);
            adj[b].push_back(a);
        }
        dfs(adj , 0 , -1 , n ); 
        // for(auto x : edge )
        //  cout<<x << " " ; 
        //  cout<<endl ; 
        ll k;
        cin >> k;
        vector<ll> primeFactor;
        for (ll i = 0; i < k; i++)
        {
            ll a;
            cin >> a;
            primeFactor.push_back(a);
        }
        for (ll i = k; i < n - 1; i++)
            primeFactor.push_back(1);
        // for(auto x :primeFactor )
        //  cout<<x <<" " ; 
        //    cout<<endl ; 
        sort(edge.begin(), edge.end(), greater<ll>());
        sort(primeFactor.begin(), primeFactor.end(), greater<ll>());
        ll ans = 0;
        ll x = 0;
        if (primeFactor.size() == n - 1)
        {
            for (ll i = 0; i <n - 1; i++)
            {
                // cout<< edge[i] << " " << primeFactor[i] << " "<<endl ; 
                // (ans % mod + ((edge[i] % mod )* (primeFactor[i] % mod)) % mod) % mod;
                ans = add(ans , mul(edge[i] , primeFactor[i])) ; 
            }
        }
        else
        {
            ll z = primeFactor.size() - (n - 1);
            for (ll i = 0; i < primeFactor.size(); i++)
            {
                if (i < z)
                {
                    // ((primeFactor[i]% mod) * (primeFactor[i + 1]%mod))% mod
                    primeFactor[i + 1] = mul(primeFactor[i] , primeFactor[i+1]);
                }
                else
                {
                    // ans % mod + ((primeFactor[i] % mod) * (edge[x++] % mod)) % mod)%mod
                    ans =  add(ans , mul(primeFactor[i] , edge[x++]) ) ;
                }
            }
        }
        cout<<ans<<endl ; 
    }

    return 0;
}