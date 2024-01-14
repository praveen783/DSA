#include<iostream>
using namespace std;
int eqindex(int arr[], int n){
	for(int i=2;i<n-2;i++){
		int ls=0,rs=0;
		for(int j=0;j<i;j++){
			ls = ls + arr[j];
		}

		for(int k=i+1;k<n;k++){
			rs = rs + arr[k];
		}
		
		if(ls==rs){
			return i;
			break;
		}
	}
	return -1;
}
int main(){
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	cout<<eqindex(arr,n);
	return 0;
}
