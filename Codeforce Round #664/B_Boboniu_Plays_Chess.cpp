#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
using namespace __gnu_pbds;
using namespace std;
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
int main()
{
    //    w(x)
    //    {
    int n, m, x, y;
    cin >> n >> m >> x >> y;
    for (int i = y; i > 0; i--)
        cout << x << " " << i << " " << endl;
    for (int i = y + 1; i <= m; i++)
        cout << x << " " << i << endl;
    int count = 1 ;
    for (int i = x + 1; i <= n; i++)
    {
        if (count % 2 == 0)
        {
            for (int j = 1; j <= m; j++)
                cout << i << " " << j << endl;
        }
        else
        {
            for (int j = m; j > 0; j--)
                cout << i << " " << j << endl;
        }
        count++;
    }
    for (int i = x - 1; i > 0; i--)
    {
        if (count %2== 0)
        {
            for (int j = 1; j <= m; j++)
            {
                cout << i << " " << j << endl;
            }
        }
        else
        {
            for (int j = m; j > 0; j--)
                cout << i << " " << j << endl;
        }
        count++;
    }
    //    }
    return 0;
}