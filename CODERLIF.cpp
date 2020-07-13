#include<algorithm>
#include<vector>
#include<string>
#include<iostream>

using namespace std;

int main(){

    int testcase;
    int arr[30];
    cin>>testcase;
    int result[testcase];
    while (testcase--)
    {
        int count = 0;
        int flag = 0;
        for(int i = 0; i <30; i++ ){
            cin>>arr[i];
        }
        for(int j =0; j<30; j++)
        {
        if (arr[j])
        {
            count++;
        }
        else {
            count=0;
        }
        if(count>5)
        {
            flag=1;break;
        }
        
    }
     if(flag==1)
     cout<<"#coderlifematters"<<endl;
     else
     cout<<"#allcodersarefun"<<endl;
     }
	return 0;
    
}