#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long int n,m,k,l,r,i;
		cin>>n>>m>>k>>l>>r;
		long long int t,pai[n],p[n],d[n],c=0;
		for(i=1;i<=n;i++)
		{
			p[i]=0;
		}
		int tym=m;
		for(i=1;i<=n;i++)
		{
			cin>>t>>pai[i];
	    	while(m!=0)
	    	{
	    		if(t>k+1)
	    		t--;
	    		else if(t<k-1)
	    		t++;
	    		else if(t>=k-1&&t<=k+1)
	    		t=k;
	    		m--;
			}
		d[i]=t;
		m=tym;
    	}
	for(i=1;i<=n;i++)
    	{
    		if(d[i]>=l&&d[i]<=r)
    		{
    		p[i]=1;
    		c++;
    	    }
		}
		if(c==0)
		cout<<"-1"<<endl;
		else
		{
		int o[1000],j=0;
		for(i=1;i<=n;i++)
		{
			if(p[i]==1)
			{
				o[j]=pai[i];
				j++;
			}
		}

    int min=o[0];
	for(i=1; i<j; i++)
	 {
      if(o[i]<min)
	   {
         min = o[i];  
       }
    }
    cout<<min<<endl;
	   
		
		
      }
	    		
    }
}
	