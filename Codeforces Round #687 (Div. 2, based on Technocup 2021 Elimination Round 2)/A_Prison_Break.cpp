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
int mat(int i ,int j , int r , int c ){
    if (i > r)
      swap(i, r ); 
    if (j > c )
       swap(j, c ); 
    int amount = min(r - i , c- j);
    int ans = amount * 2 ; 
    if (amount == r- i ){
       return ans + c- j - amount ;
    }else {
       return ans + r - i  - amount ;
    }
}
int32_t main()
{
   use_fast;
   int test ;
   cin >> test ;
   while(test--)
   {
      int n ,m , r, c; cin>> n>> m >> r>> c ; 
     int a = mat(1 , 1 , r, c ) ; 
     int b = mat(1, m , r , c );
      int d  = mat(n , 1 , r , c );
       int e  = mat(n , m  , r , c );
    //    cout << a << " " << e << " " ; 
       cout << max({a, b , d  , e}) <<endl; 
   }
   return 0;  
}