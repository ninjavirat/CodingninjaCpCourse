#include<iostream>
using namespace std;
void eulerphi(int n){
	int sieve[n];
	for(int i=1;i<=n;i++){
		sieve[i]=i;
		
	}
	for(int i=2;i<=n;i++){
		if(sieve[i]==i){
		  sieve[i]=i-1;
		  for(int j=2*i;j<=n;j+=i){
		  	sieve[j]=(sieve[j]*(i-1))/i;
	      }
			
			
		}
	}
	for(int i=1;i<=n;i++){
		cout<<"Euler Torrento Func "<<i<<"is"<<sieve[i]<<endl;
	}
}
int main(){
	int n;
	cin>>n;
	eulerphi(n);
	
	return 0;
}
