#include <iostream>
#include <string>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t-- >0)
	{
	    int  n;
	    long int k;
	    cin>>n>>k;
	    
	    long int arr[n];
	    for(int i=0;i<n;i++)
	    {
	       cin>>arr[i];
	    }
	    string str="";
	    for(int i=0;i<n;i++){
	    if(arr[i]%k==0)
	        str=str+"1";
	        else
	          str=str+"0";
	    }
	    cout<<str<<endl;
	}
	return 0;
}
