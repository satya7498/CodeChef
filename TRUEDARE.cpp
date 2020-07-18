#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int t_ram,d_ram,t_shyam,d_shyam;
	   
	    cin>>t_ram;
	    int arr_t_ram[t_ram];
	    for(int a=0;a<t_ram;a++)
	        cin>>arr_t_ram[a];
	    
	    cin>>d_ram;
	    int arr_d_ram[d_ram];
	    for(int b=0;b<d_ram;b++)
	        cin>>arr_d_ram[b];
	       
	   cin>>t_shyam;
	   int arr_t_shyam[t_shyam];
	   for(int c=0;c<t_shyam;c++)
	        cin>>arr_t_shyam[c];
	        
	   cin>>d_shyam;
	   int arr_d_shyam[d_shyam];
	   for(int d=0;d<d_shyam;d++)
	        cin>>arr_d_shyam[d];
	        
	        int count=0;
	        for(int m=0;m<t_shyam;m++)
	        {
	            for(int n=0;n<t_ram;n++)
	            {
	                if(arr_t_shyam[m]==arr_t_ram[n])
	                 {
	                     count++;
	                     break;
	                 }
	             }
	       }
	            
	             int count1=0;
	        for(int f=0;f<d_shyam;f++)
	        {
	            for(int g=0;g<d_ram;g++)
	            {
	                if(arr_d_shyam[f]==arr_d_ram[g])
	                 {
	                     count1++;
	                     break;
	                 }
	                 }
	            }
	        
	        
	        if((count==t_shyam) &&(count1==d_shyam))
	             cout<<"yes"<<endl;
	             
	        else 
	             cout<<"no"<<endl;  
	    
	    
	}
	return 0;
}
