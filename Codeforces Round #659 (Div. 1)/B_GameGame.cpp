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
long long  csbia(long long arr[]  , long long  n , long long   num  )
{
   long long  count = 0 ; 
    for(long long  i = 0 ; i < n ; i++ )
     { 
      //  / cout<< arr[i] << " "<< num << " " <<(arr[i] & num)<<endl ; 
         if((arr[i] & num) == num )
            count++  ; 
     } 
     return count ; 
}
int  main()
{
   w(x)
   {
       long long n ; 
       cin >> n; 
       long long arr[n]; 
       for(long long i= 0 ; i < n ; i++ )
          cin >> arr[i]; 
      //  sort(arr ,f arr+ n ) ; 
      // cout<< csbia(arr , n , 2 )<<endl; 
       long long player1 = 0 ; 
       long long player2 = 0 ;
       string ans = "DRAW";  
      for(int i = 30 ; i >= 0 ;  i-- )
      {
         ll c1 = csbia(arr, n , 1 << i) ; 
         // cout<< (1 << i) << " "<<  c1 << " " ; 
         if(c1  % 2 != 0  && c1 != 1 )
         {
            ll c0 = n - c1 ; 
            if(c0 % 2 == 0 )
            {
               ll pairs = c1 / 2 ; 
               if(pairs %2 == 0 )
                  ans  = "WIN" ; 
               else 
                    ans ="LOSE" ;   
                    break ;  
            }
            else 
            {
                    ans ="WIN" ;  
               break ; 
            }
         }
         else if (c1 == 1 )
         {
            ans = "WIN"; 
            break; 
         }
      } 
        cout<<ans<<endl ;   
   }
   return 0;
}