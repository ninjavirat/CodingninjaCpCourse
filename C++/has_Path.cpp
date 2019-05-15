#include <iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;
vector<int>* getPathHelper(int** edges,int n,int sv,int ev,bool* visited){
	cout<<sv<<endl;
  //if(sv==ev){
   // vector<int>* output=new vector<int>();
    //output->push_back(ev);
    //return output;
 // }
  visited[sv]=true;
  for(int i=0;i<n;i++){
    if(edges[sv][i]==1 && !visited[i]){
       vector<int>* smallOutput= getPathHelper(edges,n,i,ev,visited);
       if(smallOutput!=NULL){
        smallOutput->push_back(sv);
        return smallOutput;
      }
    }
    
  }
  //return NULL;
       }
vector<int>* getpath(int** edges,int n,int sv,int ev)
  {
  bool* visited=new bool[n];
  for(int i=0;i<n;i++){
    visited[i]=false;
  }
  vector<int>* output=getPathHelper(edges,n,sv,ev,visited);
  delete[] visited;
  return output;
}
int main(){
    int V, E;
    cin >> V >> E;
    int n=V,e=E;
    int tempX,tempY;
	
	int** edges=new int*[n];
	for(int i=0;i<n;i++){
		edges[i]=new int[n];
		  for(int j=0;j<n;j++){
		  	edges[i][j]=0;
		  }
	}
	for(int i=0;i<e;i++){
		int f,s;
		cin>>f>>s;
		edges[f][s]=1;
		edges[s][f]=1;
	}
	bool* visited= new bool[n];
	for(int i=0;i<n;i++){
		visited[i]=false;
	}
   cin>>tempX>>tempY;
   vector<int>* output=getpath(edges,n,tempX,tempY);
   if(output!=NULL){
     for(int i=0;i<output->size();i++){
         cout<<output->at(i)<<" ";
     }
   }
   delete[] visited;
    
	return 0;
}

