//We create a Deque, Qi of capacity k, that stores only useful elements of current window of k elements. An element is useful if it is in current window and is greater than all other elements on left side of it in current window. We process all array elements one by one and maintain Qi to contain useful elements of current window and these useful elements are maintained in sorted order. The element at front of the Qi is the largest and element at rear of Qi is the smallest of current window.
#include <bits/stdc++.h>
using namespace std;
void max_of_subarrays(int *arr, int n, int k){
    
    deque<int> q;
    
    int i = 0;
    for(i = 0;i<k;i++){ 
        
        while((!q.empty()) && (arr[i] >= arr[q.back()]))
            q.pop_back();
            
        q.push_back(i);
        
    }
    
    for(;i<n;i++){
        
        cout << arr[q.front()] << " ";
        
        while((!q.empty()) && (q.front() <= i-k)) q.pop_front();
        
        while((!q.empty()) && (arr[i] >= arr[q.back()])) q.pop_back();
        
        q.push_back(i);
        
    }
    
    cout << arr[q.front()];
    q.pop_front();
}
int main() {
	
	int t;
	cin >> t;
	
	while(t--){
	    
	    int n, k;
	    cin >> n >> k;
	    
	    int arr[n];
	    for(int i = 0;i<n;i++) 
	        cin >> arr[i];
	    
	    max_of_subarrays(arr, n, k);
	    cout << endl;
	    
	}
	
	return 0;
}
// i/p:
// 2
// 9 3
// 1 2 3 1 4 5 2 3 6
// 10 4
// 8 5 10 7 9 4 15 12 90 13
// o/p:
// 3 3 4 5 5 5 6
// 10 10 10 15 15 90 90

