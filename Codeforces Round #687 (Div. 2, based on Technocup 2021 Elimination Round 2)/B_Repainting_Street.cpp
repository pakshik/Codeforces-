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
int32_t main()
{
    use_fast;
    int test;
    cin >> test;
    while (test--)
    {
        int n, k;
        cin >> n >> k;
        vi v(n);
        unordered_map<int, int> um;
        for (auto &x : v)
        {
            cin >> x;
            um[x]++;
            //    if (um.find(x) == um.end()){
            //        um.insert({x , 0 });
            //    }
        }

        if (k >= n)
        {
            if (um.size() == 1)
            {
                cout << 0 << endl;
            }
            else
            {
                cout << 1 << endl;
            }
        }
        else
        {
            int ans = INT_MAX ; 
            for (int element = 1; element <= 100; element++)
            {
                int j = 0;
                int count = 0;
                for (int i = 0; i < n;)
                {
                    if (v[i] != element)
                    {
                        i += k;
                        count++;
                    }
                    else
                    {
                        i++;
                    }
                }
                ans = min (count , ans ); 
            }
        cout << ans << endl ;
        }
    }
    return 0;
}

//        for(int i= 0 ; i < k ;i++){
//            um2[v[i]]++;
//        }
//       if(um2.size() == 1 ){
//          um[(*um2.begin()).ff]++;

//       }
//         for(int i = k ;  i < n ; i++){
//             um2[v[j]]--;
//             um2[v[i]]++;
//             if(um2.size() == 1 ){
//                 um[(*um2.begin()).ff]++;
//             }
//         }
//      int ans = INT_MIN ;
//      for(auto x : um ){
//          if ( x.second > ans ){
//              ans = x.second ;
//          }
//      }
//      cout <<