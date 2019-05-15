#include<bits/stdc++.h>
using namespace std;
void print(int** edges,int n,int sv,bool* visited){
	cout<<sv;
	visited[sv]=true;
	for(int i=0;i<n;i++){
		if(i==sv){
		  continue;
		}
		if(edges[sv][i]==1){
			if(visited[i]){
			  continue;	
			}
			print(edges,n,i,visited);
		}
	}
	
}
void printBFS(int** edges,int n,int sv){
	queue<int>pendingVertices;
	bool* visited=new bool[n];
	for(int i=0;i<n;i++){
		visited[i]=false;
	}
	pendingVertices.push(sv);
	visited[sv]=true;
	while(!pendingVertices.empty()){
		int currentVertex=pendingVertices.front();
		pendingVertices.pop();
		cout<<currentVertex<<endl;
		for(int i=0;i<n;i++){
			if(currentVertex==i){
				continue;
			}
			if(edges[currentVertex][i]==1 && (!visited[i])){
				pendingVertices.push(i);
				visited[i]=true;
			}
		}
	}
}
int main(){
	int n,e;
	cout<<"Enter no of Vertices"<<endl;
	cin>>n;
	cout<<"Enter no of edges"<<endl;
	cin>>e;
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
	cout<<"DFS"<<endl;
	print(edges,n,0,visited);
	cout<<"BFS"<<endl;
	printBFS(edges,n,0);
	return 0;
}
