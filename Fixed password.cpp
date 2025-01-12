
// If n is not given in question and not mentioned in question description then take input using while loop.


#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	long long n;
	while(cin>>n){
	    if(n!=1999){
	        cout<<"Wrong"<<endl;
	    }
	    else{
	        cout<<"Correct"<<endl;
	        break;
	    }
	}
	return 0;
}
