#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	for(int i=0;i<t;i++)
	{
	    int arr[6];
	    for(int j=0;j<6;j++)
	    {
	    cin>>arr[j];
	    }
	    
	    int total=120;
	    int p=arr[5];
	    int sum=0;
	    for(int k=0;k<5;k++)
	    {
	        sum=sum+(arr[k]*p);
	    }
	    if(sum<=total)
	    {
	        cout<<"No"<<"\n";
	    }
	    else{cout<<"Yes"<<"\n";}
	    
	    
	}
	return 0;
}
