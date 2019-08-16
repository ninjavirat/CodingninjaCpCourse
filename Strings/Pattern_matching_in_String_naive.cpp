#include<bits/stdc++.h>
using namespace std;
int length(char T[]){
    int len=0;
    for(int i=0;T[i]!='\0';i++){
        len++;
    }
    return len;
}
int findString(char S[], char T[]) {
    int n=length(S);
    int m=length(T);
    for(int i=0;i<=(n-m);i++){
        int j=0;
        while(j<m && S[i+j]==T[j])
        {
            j++;
        }
        if(j==m){
            return i;
            break;
        }
    }
    return -1;
    

}
int main(){
    char S[1000],T[1000];
    cin.getline(S,1000);
    cin.getline(T,1000);
    cout<<findString(S,T)<<'\n';
    
}