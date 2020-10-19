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
    int test;
    cin >> test;
    while (test--)
    {
        int n;
        cin >> n;
        int arr1[n], arr2[n];
        int minelement = INT_MAX;
        for (int i = 0; i < n; i++)
        {
            cin >> arr1[i];
            arr2[i] = arr1[i];
            if(minelement > arr1[i])
               minelement = arr1[i] ; 
        }
        sort(arr2, arr2 + n);
        vector<int> v;
        for (int i = 0; i < n; i++)
        {
            if (arr1[i] != arr2[i])
                v.push_back(arr1[i]);
        }
        int flag = 0 ; 
        for(int i = 0 ; i < v.size(); i++ )
        {
          if(v[i]% minelement != 0 )
          {
            flag =1 ; 
            break ; 
          }
        }
        if(flag ==1 )
         cout<<"NO"<<endl ; 
        else 
        cout<<"YES" <<endl ; 
    }

    return 0;
}