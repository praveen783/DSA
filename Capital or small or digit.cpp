// ASCII value of digits 0 to 9 ranges from 48 to 57
// ASCII value of Uppercase Alphabets A to Z ranges from 65 to 90
// ASCII value of Lowercase Alphabets a to z ranges from 97 to 122
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	char x;
	cin>>x;
	int value = int(x); // Converts Character to respective ASCII value = int(x)
	if(value >=48 && value<=57){
	    cout<<"IS DIGIT"<<endl;
	}
	else if(value >=65 && value<=90){
	    cout<<"ALPHA"<<endl;
	    cout<<"IS CAPITAL"<<endl;
	}
	else{
	    cout<<"ALPHA"<<endl;
	    cout<<"IS SMALL"<<endl;
	}
}
