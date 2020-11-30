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
       int n , p , k ; 
       cin >> n >> p >> k ; 
       string s ; 
       cin >> s ;
       int arr[n+1] , c[n+1]={0}; 
       for(int j = n-1 ;j >=0 ; j-- ){
           if(j + k >= n ){
              c[j+1] = '1'-s[j]; 
           }else {
              c[j+1] = c[j+1+k] +('1'- s[j]);  
           }
       }

       int x , y ; 
       cin >> x>> y ; 
       int ans = INT_MAX ;
       for(int i= p; i <= n ; i++){
           int a =c[i]*x + (i-p)*y ; 
           ans = min(ans ,a  );
       }
    // for(int i = 1  ; i <=n ; i++){
    //     cout << c[i] << " "; 
    // }
      cout << ans << endl;   
   }
   return 0;  
}