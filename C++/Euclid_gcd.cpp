#include<iostream>
using namespace std;
class Triplet{
public :
	   int gcd;
	   int x;
	   int y;
};
Triplet gcdExtendedEuclid(int a,int b){
	   //Base case
	   if(b==0){
	   	    Triplet myAns;
	   	    myAns.gcd=a;
	   	    myAns.x=1;
	   	    myAns.y=0;
	   	    return myAns;
               }
        Triplet smallAns=gcdExtendedEuclid(b,a%b);
        //Extended euclid says
        Triplet myAns;
        myAns.gcd=smallAns.gcd;
        myAns.x=smallAns.y;
        myAns.y=(smallAns.x-((a/b)*(smallAns.y)));
		return myAns;        
}
int gcd(int a,int b){
	if(a<b){
		return gcd(b%a,a);
	}
	if(b==0){
		return a;
	}
	return gcd(b,a%b);
}
void modInverse(int A,int M){
	Triplet ans = gcdExtendedEuclid(A,M);
	cout<<" Multiplicative Module Inverse is "<<ans.x<<endl;
	
}
int main(){
	int a,b;
	cin>>a>>b;
	//modInverse(a,m);
//	int ans = gcd(a,b);
	Triplet ans=gcdExtendedEuclid(a,b);
	cout<<ans.gcd<<endl;
	cout<<ans.x<<endl;
	cout<<ans.y<<endl;
	//int ans=gcd(a,m);
	//cout<<ans;
	return 0;
}
