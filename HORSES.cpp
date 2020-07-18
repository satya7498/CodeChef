#include<bits/stdc++.h>



using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        unsigned long long int s[n];
        for(int i=0; i<n; i++)
            cin >> s[i];
        sort(s,s+n);
        unsigned long long int diff=999999999;
        for(int i=0; i<n-1; i++){
            if(s[i+1]-s[i]<diff)
                diff=s[i+1]-s[i];
        }
        cout << diff<< endl;
    }
    return 0;
}