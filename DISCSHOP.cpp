#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    
	    string str= to_string(n);
	    int len=str.length();
	    for(int i=0;i<len;i++)
	   int min = 1000000000;
            for(int j=0;j<len;j++){
                int minN = stoi(str.substr(0,j-1)+str.substr(j+1));
                if(minN < min){ min = minN;}
	    cout<<min<<endl;
	}
	return 0;
}
