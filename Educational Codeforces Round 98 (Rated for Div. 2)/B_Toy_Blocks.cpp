#include<bits/stdc++.h>
using namespace std;
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
ll max(ll a ,ll b ){
  if(a > b ) 
   return a ; 
   return b ; 
}
int32_t main()
{
    int test ;
    cin >> test ;
    while(test--)
    {
       ll n ;
       cin >> n ;
       ll arr[n] ;
       vector<ll> v(n) ;   
       for(ll i= 0 ;  i < n ; i++ ){
         cin >> v[i] ; 
       }
       long long max_element = INT_MIN ; 
       long long sum = 0 ; 
       for(auto x :  v ){
           sum += x; 
           max_element = max(x , max_element) ; 
       }
      //  cout << sum<<" " <<max_element << endl; 
      //  cout<< ceil (sum / (n-1) ) <<endl; 
       ll k  = max(max_element , (sum  + n - 2) / (n - 1)) ; 
       ll ans =  k * (n-1 ) - sum ; 
       cout << ans <<endl ; 
    }
   return 0;  
} 