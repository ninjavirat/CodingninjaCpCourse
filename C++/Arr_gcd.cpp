#include<algorithm>
#include<iostream>
#include<vector>
#include<set>
using namespace std;
vector<int> removeDuplicates(vector<int> input){
  set<int> S(input.begin(),input.end());
  input.assign( S.begin(), S.end() );
  return input;

    // Write your code here

}
int main()
{
  vector<int> input(4);
  for(int i=0;i<input.size();i++)
  {
    cin>>input[i];
  }
  vector<int> R = removeDuplicates(input);
  vector<int>:: iterator it;
  for(it=R.begin();it!=R.end();it++)
  {
  	cout<<endl;
    cout<<*it<<endl;
  }
  return 0;
  
}



