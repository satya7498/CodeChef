#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;cin>>t;
	while(t--)
	{
	    int n,a,k;
	    cin>>n>>a>>k;
	    int s = 180*(n-2);
	    int d_den = n*(n-1);
	    int d_num = 2*(s-a*n);
	    int num = a*d_den+(k-1)*d_num;
	    int den = d_den;
	    int g = __gcd(den,num);
	    den = den/g;
	    num = num/g;
	    cout<<num<<" "<<den<<endl;
	}
	return 0;
}
