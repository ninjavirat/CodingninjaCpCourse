Here, We will use the formula Dividend = Divisor * Quotient + Remainder
where Divisor = max_element
           Quotient = New number at index i after rearrangement
           Remainder = Old Number at index i before rearrangement
           Dividend = The number stored at index i

The even indices store Max elements and the odd indices store Min elements. Traverse the array, and look for elements accordingly, multiply it with Divisor (max_element) and add the value present at arr[i]

Divisor is a value which is higher than values stored in array (in this case n - size of array, as array elements are between 0 to n-1)
Obviously, don't forget to remove the multiplier n from the values while accessing and outputting the new values.
// C++ program to rearrange an array in minimum 
// maximum form 
#include <bits/stdc++.h> 
using namespace std; 

// Prints max at first position, min at second position 
// second max at third position, second min at fourth 
// position and so on. 
void rearrange(int arr[], int n) 
{ 
	// initialize index of first minimum and first 
	// maximum element 
	int max_idx = n - 1, min_idx = 0; 

	// store maximum element of array 
	int max_elem = arr[n - 1] + 1; 

	// traverse array elements 
	for (int i = 0; i < n; i++) { 
		// at even index : we have to put maximum element 
		if (i % 2 == 0) { 
			arr[i] += (arr[max_idx] % max_elem) * max_elem; 
			max_idx--; 
		} 

		// at odd index : we have to put minimum element 
		else { 
			arr[i] += (arr[min_idx] % max_elem) * max_elem; 
			min_idx++; 
		} 
	} 

	// array elements back to it's original form 
	for (int i = 0; i < n; i++) 
		arr[i] = arr[i] / max_elem; 
} 

// Driver program to test above function 
int main() 
{ 
	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 }; 
	int n = sizeof(arr) / sizeof(arr[0]); 

	cout << "Original Arrayn"; 
	for (int i = 0; i < n; i++) 
		cout << arr[i] << " "; 

	rearrange(arr, n); 

	cout << "\nModified Array\n"; 
	for (int i = 0; i < n; i++) 
		cout << arr[i] << " "; 
	return 0; 
} 
