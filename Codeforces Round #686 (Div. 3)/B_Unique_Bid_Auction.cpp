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
      int n ; 
      cin >> n ; 
      int arr[n]  ;
      unordered_map<int ,int > um ;
      unordered_map<int ,int > um1;  
      for(int i = 0 ; i < n ; i++) 
        {
               cin >> arr[i] ;
             if(um.find(arr[i]) == um.end()){
                 um[arr[i]] = i + 1 ; 
             }   
             um1[arr[i]]++ ;
        }
        vector<int> v ; 
        //  for(auto x: um )
        //    cout << x.first << " " << x.second << " " ; 
        //    cout << endl; 
    //  sort(arr, arr + n ); 
     int ans = -1 ; 
     
        for(auto x : um1 ){
            if (x .second == 1 ){
                v. push_back(x.first); 
            }
        }
       sort(v.begin() , v.end()) ; 
        if (v.size() == 0 ){
            cout << -1 << endl ; 
        }else {
            cout << um[v[0]]  << endl; 
        }

      
    //   cout << ans << endl ; 
   }
   return 0;  
}