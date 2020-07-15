#include <iostream>
#include <bits/stdc++.h> 
using namespace std;

int main() {
	// your code goes here
	
	
	
	
		int t;
		cin>>t;
		  int temp;
		
		for(int k=0;k<t;k++)
		{
		    int n;
		    cin>>n;
		    int arr[n];
		    for(int a=0;a<n;a++)
		    {
		       cin>>arr[a];
		       
		    }
		    
		     int num = sizeof(arr)/sizeof(arr[0]); 
  
    sort(arr, arr+num); 
		   
        int ans=arr[0];
        for(int b=1;b<n;b++)
        {
            ans=ans%arr[b];
            
        }
       cout<<ans<<"\n";
		}
	return 0;
}
