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
int32_t main()
{
  int test ;
  cin >> test ;
  while(test--)
  {
    int  n , k ; 
    cin >> n >> k ; 
    int arr[n * k ] ; 
    for(int i= 0 ;i < n * k  ; i++ ){
        cin >>arr[i] ; 
    }  
    int mid = (n+1 ) / 2  ; 
    // cout << mid << " " ;
    int rem = n - mid ;
    int temp = rem ; 
    ll ans = 0 ;  
    int temp2  = k ; 
    for(int i= n * k- 1 ; i >= 0 ; i--){
         if(rem == 0 ){
            //  cout << arr[i] << " " ; 
              ans += arr[i] ;
              rem =temp ;
              temp2--;   
         }
         else {
             rem--;  
         }
         if(temp2 == 0 )
          break ; 
    } 
   cout << ans << endl ; 
  }
   return 0;  
}