#include <iostream>
using namespace std;
int count(char arr[],int num,int op){
    int C=0;
    for(int i=0;i<num;i++){
        if(arr[i]=='H')
         C++;
    }
    return C;
    
}
int main() {
	// your code goes here
	int testcases;
	cin>>testcases;
	
	 while(testcases--)
	 {
	     int n,k,ans;
	       cin>>n>>k;
	     if(k<n){
	        char coins[n];
	          for(int i=0;i<n;i++)
	            cin>>coins[i];
	          int sub=n-k;      
	        for(int j=n-1;j>=n-k;j--){
	            if(coins[j]=='H')
	              {
	                  for(int i=0;i<n;i++)
	                    {
	                        if(coins[i]=='H')
	                         coins[i]='T';
	                        else
	                         coins[i]='H';
	                         
	                    }
	              }
	        }
	   
	   ans=count(coins,sub,k);
	     
	     cout<<ans<<endl; }
	   }
	return 0;
}
