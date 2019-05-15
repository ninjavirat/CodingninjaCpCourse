#include <iostream>
using namespace std;
  
// Recursive function to return gcd of a and b 
int gcd(int a, int b) 
{ 
    if (a == 0) 
        return b; 
    return gcd(b % a,a);  
} 
  
// Driver program to test above function 
int main() 
{ 
    int a = 98, b = 56; 
    cout<<"GCD "<<gcd(a, b); 
    return 0; 
} 
