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
bool   cal(int arr1[]  , int arr2[], int n1 , int n2 ,int ans )
   {
      
   for(int i = 0 ; i< n1 ; i++ )
        {
           int flag = 0 ; 
           for(int j =0 ; j < n2 ; j++ )
           {
              int res= (arr1[i] & arr2[j]); 
              if((res|ans) == ans ) 
              {
                 flag =1 ; 
                 break;
              }
           }
           if(flag == 0 )
             {  return false  ;} 
        }
        return true  ; 
   }
int main()
{
   int n1 , n2 ; 
   cin >> n1 >> n2 ;
   int arr1[n1] ,arr2[n2] ; 
   for(int i = 0 ; i < n1 ; i++ ) 
      cin >> arr1[i] ; 
   for(int j = 0 ; j < n2 ; j++ )
     cin >> arr2[j] ; 
     int ans =  (1<<9); 
   for(int i= 0 ; i <  ans ; i++ )
   { 
         if(cal(arr1 ,arr2, n1  , n2 ,i )  )
          {
              cout<< i << endl ; break ;
          }        
   }
   return 0 ; 

}