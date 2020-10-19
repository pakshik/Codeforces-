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
#define w(x) \
   int x;    \
   cin >> x; \
   while (x--)
   vector<int> Gen(int n ,int st , int dif)
   {
       vector<int> v ;
       v.push_back(st);  
       for(int i= 2   ; i <= n ; i++ )
       {
           v.push_back(v[v.size()-1] + dif ) ; 
       }
       return v ; 
   }
int main()
{
   w(x)
   {
       int a , b , c ; 
       cin >> a >> b >> c ; 
         vector<int> ans ; 
         ans.push_back(INT_MAX) ; 
       for(int i =1 ; i <= 50 ; i++ )
       {
           for(int j = 1 ;j <= 50 ; j++ )
           {
               vector<int> gen = Gen( a  , i  , j );
               bool isX = false , isY = false ; 
               for(auto x : gen ) 
               {
                   if(x == b )
                     isX = true ; 
                    if(x == c )
                     isY = true ;  
               }
               if(isX && isY)
               { 
                  if(ans[ans.size()-1] > gen[gen.size()-1])
                  {
                      ans = gen ; 
                  }
               }
           }
       }
       for(auto x: ans )
        cout << x <<" " ; 
        cout<<endl ; 
   }
   return 0;
}