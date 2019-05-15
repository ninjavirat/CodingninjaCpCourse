#include<iostream>
#include<vector>
#include<string>
#include<utility>
#include<set>
#include<map>
using namespace std;
int main()
{
	//vector<int> v;
	//for(int i=0;i<5;i++)
//	{
//		v.push_back(i+1);
//	}
//	vector<int> ::iterator itr;
//	for(itr = v.begin();itr!=v.end();itr++)
//	{
//		cout<<*itr<<endl;
//	}
// string s,s1;
 // s="vishnu";
 //cout<<s<<endl;
 //string s3(s,2,4);
 //s1=s.substr(2,4);
 //cout<<s1<<endl;
 //cout<<s3<<endl;
// if(s1.compare(s3)==0){
 //	cout<<"both are equqal"<<endl;
 //}
 //else
 //{
 //	cout<<"not equal"<<endl;
 //}
 //pair<int,char> p;
 //pair<int,char>p1(2,'v');
 //p=make_pair(4,'r');
 //cout<<p1.first <<' '<<p1.second<<endl;
 //cout<<p.first <<' '<<p.second<<endl;
 map<int,int> m;
 int arr[] = {1,2,3,4,5,5,6};
 for(int i=0;i<7;i++)
 {
 	m[arr[i]] = m[arr[i]]+1;
 }
 map<int,int>:: iterator it;
 for(it=m.begin();it!=m.end();it++){
		cout<<it->first << " :" << it->second<<endl;
	}
	m.erase(1);
cout<<endl;
for(it = m.begin();it!=m.end();it++)
{
	cout<<it->first << " : " << it->second<<endl;}
 
 
 
 
 
  
	return 0;
}
