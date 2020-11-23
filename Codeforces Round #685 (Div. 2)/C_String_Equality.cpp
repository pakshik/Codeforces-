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
      int n , k ;
      cin >> n >> k ; 
      string a ; 
      string b ; 
      cin >> a; 
      cin >> b ; 
    //   sort(a.begin() , a.end());
    //   sort(b.begin() , b.end());
    //   bool ans = true ; 
    //   for(int i = 0 ;i < n ; i++){
    //       if(a[i] >  b[i]){
    //         //   cout << a[i] <<  "  "<< b[i]/ <<" " ; 
    //           ans  = false ; 
    //           break ; 
    //       }else if (a[i] < b[i]){
    //           int j =  i ;
    //           char ch = a[i] ;
    //           char ch2  = b[i] ;   
    //           if( i + k - 1   < n ){
    //              for(j = i ; j <= i + k -1 ; j++){
    //                  if(a[j] != ch ){
    //                      ans  =false; 
    //                      break; 
    //                  }else {
    //                     a[j] = ch2  ; 
    //                  }
    //              }  
    //           }else {
    //             //   cout << j << " " ;   
    //              ans = false ;  
    //           }  
    //       }
    //       if(ans == false )
    //         break ; 
    //   }
     int count1[27]={0} , count2[27] ={0}; 
     for(int i= 0 ; i < n ; i++){
         count1[a[i]-'a']++;
         count2[b[i]-'a']++;  
     }
     bool ans  = true ; 
    for(int i= 0 ; i< 27  ; i++){
        if(count2[i] > count1[i] ){
            ans = false ; 
            break ; 
        }else {
            count1[i] -= count2[i] ; 
            if(count1[i] % k != 0 ){
                ans  = false ; 
                break ; 
            }else {
                if(i + 1 < 27 )
                  count1[i+1] += count1[i] ; 
            }
        }
    }
      if(ans)
        cout << "Yes" <<endl; 
      else 
       cout << "No"<<endl ;     
   }
   return 0;  
}