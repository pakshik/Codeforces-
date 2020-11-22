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
ll min(ll a , ll b) 
{
    if(a > b ) 
    return b ; 
    return a ; 
}

int32_t main()
{
    int test ;
    cin >> test ;
    while(test--)
    {
        int n , c0 ,c1 , h ; 
        cin >> n >> c0 >>c1 >>  h ;
        string s ; 
        cin >>s ;
        // cout <<s << " " ; 
        ll count0 = 0 ;
        ll count1 = 0 ; 
        for(int i = 0 ; i < n ; i++ ){
            if(s[i] == '0')
             count0++;
            else 
             count1++ ;  
        }
        
        cout << min ( count0 * c0 + count1 * c1 ,min( count0*h + n * c1 , count1*h + n *c0)) <<endl ; 
    }
   return 0;  
}