#include<bits/stdc++.h>
#include<unordered_set>
using  namespace std;
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
      int n ; cin >> n ; 
      int arr[n] ;
    //   unordered_set<int> us ;  
      unordered_map<int,int > um ; 
      vector<int> v ; 
      int index = 0 ; 
      for(int i = 0 ;i < n ; i++ ) {
          cin >> arr[i] ;
        if(um.find(arr[i]) == um.end()){
           um.insert({arr[i] , index}); 
            index++;
        }  
         if(i == 0 ){
            v.push_back(arr[i]); 
         }else {
             if (arr[i-1] != arr[i]){
                 v.push_back(arr[i]) ; 
             }
         }
      }
    //   for(auto x :v)
    //    cout << x<<"  "; 
    //    cout << index << " " ; 
    if (index == 1 ){
        cout  <<  0 << endl ; 
    }else {
         vector<int>v1[index] ;
      for(int i= 0 ; i < index  ; i++){
          v1[i].push_back(0) ; 
      }
      for(int i= 1 ;  i <(int) v.size() ;i++){
        if (i == (int)v.size() -1 ){
            v1[um[v[i]]].push_back(i-1) ;
        }else {
            v1[um[v[i]]].push_back(i-1) ;
         v1[um[v[i]]].push_back(i+1) ;  
        }
         
      }
      
      int ans  = INT_MAX; 
      for(int i = 0 ; i <index; i++){
         int a = v1[i].size() ; 

          ans = min ( ans ,a +1 ) ; 
      }
      cout << ans / 2 << endl ; 
    //   cout << endl ; 
    }  

     
   }
   return 0;  
}