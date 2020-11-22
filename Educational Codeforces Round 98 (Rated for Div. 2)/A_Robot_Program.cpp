#include<bits/stdc++.h>
using namespace std;
#define umii            unordered_map<int  ,int   >
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
// int dp[10001][10001]; 
long long   calculate(long long  a ,long long  b ){
    long long   r =  min( a , b ) ;
    long long  ans = 2  * r ; 
   if(a== b ){
       return  ans  ; 
   } 
    if(r == a){
        long long  count = b -r ; 
        ans += 2 * count ; 
    }else {
        long long  count = a - r ; 
        ans += 2 * count  ; 
    }
    return ans -1  ; 
}
int32_t main()
{
    long long  test ;
    cin >> test ;
    while(test--)
    {  
        long long  x ,y  ;
        cin >> x>> y ; 
        cout << calculate(x , y )<<endl ; 
    } 
   return 0;  
}