#include<bits/stdc++.h>
using namespace std;
int kadane(int* arr,int n){
	int cs=0;
	int bs=0;
	for(int i=0;i<n;i++){
		cs=cs+arr[i];
		if(bs<cs){
			bs=cs;
		}
		if(cs<0){
			cs=0;
		}
	}
	return bs;
}
int main(){
	int n;
	cin>>n;
	int* arr=new int[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	cout<<kadane(arr,n);
	
	
	
	return 0;
}
