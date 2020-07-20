#include<iostream>
#include<string>
#include <iomanip>


using namespace std;

int main(){

    float bal, left;
    int amt;
    cin>>amt>>bal;
    
    if (amt+0.50f < bal)
    {
        if (amt % 5 == 0)
        {
            left = bal - amt - 0.50f;
            cout<<setprecision(2)<<fixed<<left;
        }
        else
        {
            cout<<setprecision(2)<<fixed<<bal;
        }
    }
    else
    {
        cout<<setprecision(2)<<fixed<<bal;
    }

}