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
int takeeven(int n )
{
    if(n%2 == 0 )
       return n ; 
    else 
       return n+1 ; 
}
int takeodd(int n )
{
    if(n%2 == 0 )
       return n+1; 
    else 
       return n ; 
}
int32_t main()
{
   int test ;
   cin >> test ;
   while(test--)
   {
       int m , n ; 
       cin >> m >> n ; 
       int arr[m][n] ; 
       for(int i = 0 ; i < m  ;i++)
       {
           for(int j = 0 ; j < n ; j++)
             {  cin >> arr[i][j] ;
                // int temp = 
                if( i % 2 == 0 && j %2 == 0  )
                  arr[i][j] = takeeven(arr[i][j]); 
                else if (i % 2 == 0 && j% 2 != 0  )
                  arr[i][j] = takeodd(arr[i][j]) ; 
                else if (i%2 != 0 && j%2 == 0 )
                  arr[i][j] = takeodd(arr[i][j]); 
                else 
                  arr[i][j] = takeeven(arr[i][j]) ;                        
             }    

       }  
       for(int i = 0; i < m ;i++)
         {for(int j = 0 ; j < n ;j++)
           cout << arr[i][j] << " " ;
           cout <<endl ;}
   }

   return 0;
}