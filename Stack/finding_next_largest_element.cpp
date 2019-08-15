#include <bits/stdc++.h>
using namespace std;
#define MAX 256

int main() {
	int n;
	std::stack<int> s1 ;
	unordered_map<int,int> m;
	std::cin >> n;
	int arr[MAX];
	for(int i=0;i<n;i++){
	    cin>>arr[i];
	}
	s1.push(arr[0]);
	for(int i=1;i<n;i++){
	      if(arr[i]<s1.top())
	        {
	         s1.push(arr[i]);
	        }
	      else{
	          while(!s1.empty() && arr[i]>s1.top())
	           {
	           m[s1.top()]=arr[i];
	           s1.pop();
	           }
	          s1.push(arr[i]);
	         }
	 }
	while(!s1.empty())
	{
	  int top1=s1.top();
	  m[top1]=-1;
	  s1.pop();
	   
	}
	 
	 
	for(int i=0;i<n;i++){
	   std::cout <<m[arr[i]]  <<" ";
	   
	   }
	
	return 0;
}