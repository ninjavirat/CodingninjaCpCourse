#include<iostream>
using namespace std;
int fib(int n)
{
	int F[n];
	F[0]=0;
	F[1]=1;
	cout<<F[0]<<F[1]<<endl;
	for(int i=2;i<=n;i++)
     {
       F[i]=F[i-1]+F[i-2];
	   cout<<F[i]<<endl;;
	 }	
	 return F[n];
}
int main()
{
	int n;
	cin>>n;
	cout<<fib(n)<<endl;
	return 0;
	
}
