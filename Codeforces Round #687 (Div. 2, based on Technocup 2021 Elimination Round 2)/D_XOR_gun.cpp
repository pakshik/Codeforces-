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
ll min (ll a ,ll b ){
    if(a> b){
        return b ;
    }
    return a ;
}
int32_t main()
{
   use_fast;
   ll n ; 
   cin >> n ; 
   ll arr[n]; 
   for(ll i = 0 ;i  < n ; i++){
       cin >> arr[i] ; 
   }
   ll msb[n] ; 
   for(ll i= 0 ; i < n ;  i++){
       ll num = log2(arr[i]);
    //    cout << num <<"  " ;
       msb[i] = num + 1 ;
   }
   bool ans = false ;
   for(ll i= 1 ; i <n -1 ; i++){
       if(msb[i]== msb[i-1] && msb[i] == msb[i+1]){
           ans = true ;
           break;
       } 
   }
   if(ans)
    cout << 1 << endl ;
   else {
       int yihuo1 = 0, yihuo2 = 0, ans = 1e9;
	for(int i = 0 ; i < n-1 ; i++) {
		yihuo1 = yihuo2 = 0;
		for(int j = i; j < n-1 ; j++) {
			yihuo1 = yihuo1 ^ arr[j];
			yihuo2 = 0;
			for(int k = j + 1; k < n; k++) {
            //  cout << "( "<<i << " " << j << " )"<<"( "<<j+1 << " " << k << " )";
                
				yihuo2 = yihuo2 ^ arr[k];
				if(yihuo1 > yihuo2) {
			//		cout << k << " " << i << endl;
                //    cout << yihuo1 <<  " "<< yihuo2<<" " << k - i -1 ;
					if(ans > k - i - 1) ans = k - i - 1;
				}
                cout <<endl;
			}
		}
	}
	if(ans != 1e9)
		cout << ans << endl;
	else 
        cout << -1 << endl;
    //    ll pref[n] , suff[n]; 
    //    pref[0] = arr[0];
    //    suff[n-1] = arr[n-1] ; 
    //    for(ll i = 1 ; i< n; i++){
    //        pref[i] = (pref[i-1] ^ arr[i]);
    //        suff[n-i-1] =(suff[n-i]^arr[n-i-1]);  
    //    }
    //    for(ll i = 0 ; i < n ; i++){
    //        cout << pref[i] <<" " ; 
    //    }
    //    cout << endl ; 
    //     for(ll i = 0 ; i < n ; i++){
    //        cout << suff[i] <<" " ; 
    //    }
    //    cout << endl ; 
    //    ll ans = INT_MAX  ; 
    //  for(int i= 0 ; i < n ; i++){
    //      if(i!= n-1 && pref[i] > arr[i+1]){
    //         ans = min(ans ,i );
    //      } 
    //  }
    //  for(int i= n-1  ; i >=0  ; i--){
    //      if(i != 0 && suff[i] < arr[i-1]){
    //         //  cout << i <<" " ;
    //          ans = min(ans ,n - i -1 );
    //      }
    //  }
    //  if(ans == INT_MAX )
    //  { 
    //   for(int i=0 ; i < n ; i++){
    //        for(int j = i +1 ; j < n ; j++){
    //            if(pref[i] > suff[j]){
    //                ans = min(ans , j - i   );
    //            }
    //        }
    //    }
    //  }
    //    if(ans == INT_MAX)
    //      cout << -1 << endl;
    //     else 
    //      cout << ans << endl ; 
   }  

   return 0;  
}