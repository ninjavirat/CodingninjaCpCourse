#include<bits/stdc++.h>
using namespace std;

string longestPalindrome(string A) {
    
    int i,high,low,len,start=0,max=1,even=0,count=1;
    len=A.size();
    if(len%2==0){
        even=1;
    }
    for(i=1;i<len;i++){
        low=i-1;
        high=i;
        count++;
        while(low>=0 && high<len && A[low]==A[high]){
            count++;
            if(high-low+1>max){
                max=high-low+1;
                start=low;
            }
            --low;
            ++high;
        }
        low=i-1;
        high=i+1;
        while(low>=0 && high<len && A[low]==A[high]){
            count++;
            if(high-low+1>max){
                max=high-low+1;
                start=low;
            }
            --low;
            ++high;
        }
        
    }
    cout<<count<<endl;
    return A.substr (start,max);
}

int main(){
    int t;
    cin>>t;
    while(t--){
        string str;
        cin>>str;
        string s=longestPalindrome(str);
        int n=s.length();
        cout<<s<<endl;
        cout<<n;
    }
    return 0;
}
// i/p:
// 1
// aaaabbaa
// o/p:
// 18(no of palindromes)
// aabbaa(longestPalindrome)
// 6(its_length)