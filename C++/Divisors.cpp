#include<bits/stdc++.h>
#define MAX 500001
#define pb push_back
#define MOD 1000000007
typedef long long ll;
using namespace std;

vector<int>* sieve(){
	vector<int>* primes = new vector<int>();
	bool isPrime[MAX];
	for(int i=0;i<=MAX;i++){
		isPrime[i]=true;
	}
	for(int i=2;i*i<=MAX;i++){
		if(isPrime[i]){
			for(int j=i*i;j<=MAX;j+=i){
				isPrime[j]=false;
			}
			
		}
	}
	primes->pb(2);
	for(int i=3;i<=MAX;i+=2){
		if(isPrime[i]){
			primes->pb(i);
		}
	}
	return primes;
	
}
ll Count_Divisors(int n,vector<int>* &primes){
	ll result = 1;
	for(int i=0;primes->at(i)<=n;i++){
		int k=primes->at(i);
		ll count=0;
		while((n/k)!=0){
			count= (count+(n/k)%MOD);
			k=k*k;
		}
		result=(result*((count+1)%MOD)%MOD);
		
	}
	return result;
}



int main(){
	int n;
	cin>>n;  
	ll c;
    vector<int>* primes=sieve();
    c=Count_Divisors(n,primes);
    cout<<c<<endl;
	 
    return 0;
}

