#include<iostream>
using namespace std;
int main()
{
 int a = 10;
int *p = &a;

cout << a << endl;
cout << &a << endl;  // it will print the address of a
cout << *p  << endl;  // it will print the value of a
cout << p << endl;   // it will print the address of a

cout<<"\n";
cout<<"\n";

int **q = &p;
cout << &p << endl;    // it will print the address of p
cout << q << endl;   // it will print the address of p
cout << *q << endl;  // it will print the address of a
cout << **q << endl;  // it will print the value of a


int b = 20;   // create a new variable  

cout<<"\n";
cout<<"\n";

*q = &b;     // we are not initializing again the pointer q ( you can see here is no any datatype like int ,float.....)
cout << &b << endl;  // it will print the address of b
cout << *q << endl;    // it will print the address of b ( now variable q is pointing to variable b) ,,but address will be same bcoz we are not intializing again 
                       // it here (line 28)
cout << q << endl;   // so it will print the address of the ' p '.
cout << p << endl;   // it will print the address of b  (instead of variable 'a' now pointer p contains the adress of  variable 'b')

(*p)++; // now we are incrementing pointer p by 1  (actually the value of b is incrementing)  and the value of 'a' will not change ( reason is line 32 & 33)

cout<<"\n";
cout<<"\n";

cout << *p << endl;   // it will print the 21 

cout << (*p)++ << endl;  // it is post increment so it will also print 21

cout << a << " " << b << endl;  // the ans is 10 and 21

return 0;
  
	
}






















  
