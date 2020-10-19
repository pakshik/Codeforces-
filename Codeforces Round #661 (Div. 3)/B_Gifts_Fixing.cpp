#include<bits/stdc++.h>
using namespace std ; 
int main()
{
 // 	c_p_c();
	//cout<<'y'<<endl ; 
	long long  test ; 
	cin>>test ; 
	while(test--)
	{
			long long  n ;
		cin >> n ;
			long long  arr1[n],arr2[n];
	    	long long  min1 = INT_MAX , min2 = INT_MAX ; 
		for (	long long  i = 0 ; i < n ; i++)
		{	cin >> arr1[i];
			if(min1 >arr1[i])
			   min1  = arr1[i]; 
		}
		for (	long long  i = 0 ; i < n ; i++)
		{	cin >> arr2 [i];
		if(min2 >arr2[i])
			   min2  = arr2[i]; 
		}
			long long  minans = 0 ; 
		for(	long long  i= 0;i < n ; i++ )
         {
             	long long  diff1 = 0 ,diff2 = 0 ; 
             if(arr1[i] > min1 )
                diff1 += arr1[i]- min1; 
             if(arr2[i] > min2 )
                 diff2 += arr2[i] - min2 ; 
             minans+= max(diff1 ,diff2 ); 
         }
	cout <<minans <<endl ; 
		

	}


	return 0;
}