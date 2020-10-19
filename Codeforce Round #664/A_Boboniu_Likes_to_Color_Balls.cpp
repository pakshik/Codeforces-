#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
using namespace __gnu_pbds;
using namespace std;
#define umii unordered_map<int, int>
#define umic unordered_map<int, char>
#define umci unordered_map<char, int>
#define usi unordered_set<int>
#define usc unordered_set<char>
#define mii map<int, int>
#define mic map<int, char>
#define mci map<char, int>
#define si set<int>
#define sc set<char>
#define ll long long
#define ff first
#define ss second
#define pb push_back
#define mp make_pair
#define pii pair<int, int>
#define vii vector<vector<int>>
#define vi vector<int>
#define pqb priority_queue<int>
#define pqs priority_queue<int, vi, greater<int>>
#define setbits(x) __builtin_popcountll(x)
#define zrobits(x) __builtin_ctzll(x)
#define mod 1000000007
#define inf 1e18
#define ps(x, y) fixed << setprecision(y) << x
#define mk(arr, n, type) type *arr = new type[n];
#define w(x)  \
    int x;    \
    cin >> x; \
    while (x--)
int main()
{
    w(x)
    {
        int arr[4];
        int chance = INT_MAX;
        int countodd = 0;
        for (int i = 0; i < 4; i++)
        {
            cin >> arr[i];
            if (arr[i] % 2 != 0)
                countodd++;
            if (i != 3)
                chance = min(chance, arr[i]);
        }
        if (countodd == 0 || countodd == 1)
        {
            cout << "Yes" << endl;
        }
        else
        {
            if (countodd == 2)
            {
                int count = 0;
                for (int i = 0; i < 3; i++)
                {
                    arr[i] -= chance;
                    if (arr[i] % 2 != 0)
                        count++;
                }
                arr[3] += chance;
                if (arr[3] % 2 != 0)
                    count++;
                if (count > 1)
                    cout << "No" << endl;
                else
                    cout << "Yes" << endl;
            }
            else
            {
                if (chance == 0)
                    cout << "No" << endl;
                else
                    cout << "Yes" << endl;
            }
        }
    }
    return 0;
}