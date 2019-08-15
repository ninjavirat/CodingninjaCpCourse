#include <bits/stdc++.h>
using namespace std;
void stack_span(int price[],int *span1,int m)
 {
    std::stack<int>st1 ;
    span1[0]=1;
    st1.push(0);
    for(int i=1;i<m;i++)
    {
        while(!st1.empty() && price[st1.top()]<=price[i]){
            st1.pop();
        }
        span1[i]=st1.empty()?i+1:i-(st1.top());
        st1.push(i);
    }
  }
  
int main() 
 {
int price[]={20,10,100,80,120};
int m=sizeof(price)/sizeof(price[0]);
int span[m];
stack_span(price,span,m);
for(int i=0;i<m;i++){
    cout<<span[i]<<" ";
}
return 0;
}
//o/p:
//1 1 3 1 5