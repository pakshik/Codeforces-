#include<bits/stdc++.h>
using namespace std;
#define use_fast ios::sync_with_stdio(false), cin.tie(0), cout.tie(0)
#define umii            unordered_map<int,int >
#define umic            unordered_map<int,char >
#define umci            unordered_map<char,int >
#define usi             unordered_set<int>
#define usc             unordered_set<char>
#define mii             map<int,int >
#define mic             map<int,char >
#define mci             map<char,int >
#define si              set<int>
#define sc              set<char>
#define ll              long long
#define ff              first
#define ss              second
#define pb              push_back
#define mp              make_pair
#define pii             pair<int,int>
#define vii             vector<vector<int>>
#define vi              vector<int>
#define pqb             priority_queue<int>
#define pqs             priority_queue<int,vi,greater<int>>
#define setbits(x)      __builtin_popcountll(x)
#define zrobits(x)      __builtin_ctzll(x)
#define mod             1000000007
#define inf             1e18
#define ps(x,y)         fixed<<setprecision(y)<<x
#define mk(arr,n,type)  type *arr=new type[n];
#define w(x)            int x; cin>>x; while(x--)
int32_t main()
{
   use_fast;
   int test ;
   cin >> test ;
   while(test--)
   {
      int n ,q ; 
      cin >> n >> q ; 
      string s ;
      cin >> s ; 
      for(int i= 0 ; i < q ; i++){
          int l , r ; 
          cin >> l >> r;  
          if ( r -l == 0  ){
              cout << "NO" << endl ; 
          }else {
               char ch1  = s[l-1]  ; 
               char ch2  = s[r-1] ; 
               bool flag = false ; 
               for(int i = 0 ;i < l -1 ; i++ ){
                   if(ch1 == s[i])
                     {
                       flag = true ; 
                     }
               }
               if(!flag){
                   for(int i= r ; i < n ; i++){
                       if(ch2 == s[i])
                          {
                              flag = true ; 
                          }
                   }
               }
             if(flag  ){
                 cout << "YES  "<<endl ; 
             }else 
              cout << "NO" << endl; 
          }
      }   
   }
   return 0;  
}