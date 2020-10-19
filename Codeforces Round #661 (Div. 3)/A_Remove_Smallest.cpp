#include<bits/stdc++.h>
using namespace std ; 
int main()
{
 // 	c_p_c();
	//cout<<'y'<<endl ; 
	int test ; 
	cin>>test ; 
	while(test--)
	{
		int n ;
		cin >> n ;
		int arr[n];
		
		for (int i = 0 ; i < n ; i++)
		{	cin >> arr[i];
			
		}
		if (n == 1 )
			cout << "YES" << endl ;
		else
		{
			sort(arr, arr + n) ;
			int flag = 0 ;
			for (int i = 0 ; i < n - 1 ; i++)
			{
				if (arr[i]+1 != arr[i+1]  && arr[i] != arr[i+1] )
				{
					flag = 1 ;
					break ;
				}
			}
			if (flag == 0 )
				cout << "YES" << endl;
			else
				cout << "NO" << endl ;
		}

	}


	return 0;
}