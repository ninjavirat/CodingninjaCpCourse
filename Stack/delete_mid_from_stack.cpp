#include<bits/stdc++.h>
using namespace std;

stack<int> deleteMid(stack<int>s,int sizeOfStack,int current)
{
    // check if current is half of the stack size, then you are at mid of stack
    if(current==sizeOfStack/2)
    {
        s.pop();
        return s;
    }
    
    int x=s.top();
    s.pop();
    // current+=1;
    
    // recursively call deleteMid funciton
    s=deleteMid(s,sizeOfStack,current+1);
    
    s.push(x);
    
    return s;
}
int main(){
    stack<int>s ;
    int m;
    cin>>m;
    for(int i=0;i<m;i++){
        int x;
        cin>>x;
        s.push(x);
    }
    stack<int>s2=deleteMid(s,s.size(),0);
    while(!s2.empty()){
        cout<<s2.top()<<" ";
        s2.pop();
    }
    return 0;
}