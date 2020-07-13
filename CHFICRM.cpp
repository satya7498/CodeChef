#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(){
    int testcase,n;
    cin>>testcase;
    while(testcase--){
        cin >> n;
	    int fives = 0, tens = 0;
         bool ok = true;
	    for (int j=0; j<n; j++) {
	        int c;
	        cin >> c;
	        if (c == 5)
	            fives++;
	        else if (c == 10) {
	            if (fives > 0) {
	                fives--;
	                tens++;
	            }
	            else
	                ok = false;
	        }
	        else { // 15
	            if (tens > 0)
	                tens--;
	            else if (fives > 1)
	                fives -= 2;
	            else
	                ok = false;
	        }
	    }
	    cout << (ok? "YES": "NO") << endl;
    }
}