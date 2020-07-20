#include <iostream>
#include<algorithm>
#include<vector>
#include<string>
#include<iostream>
using namespace std;


int main() {
	// your code goes here
	
	int t;
	cin>>t;

	while(t-- >0)
	{
	    int n,k;
	    cin>>n;
	    cin>>k;
	    if(k<=1000){
	    int arr[n];int sum=0;
	    for(int j=0;j<n;j++)
	    {
	        cin>>arr[j];
	        
	        if(arr[j]>=k)
	        {
	            sum=sum+(arr[j]-k);
	        }
	    }
	  
	   cout<<sum<<endl; 
	}}
	return 0;
}
