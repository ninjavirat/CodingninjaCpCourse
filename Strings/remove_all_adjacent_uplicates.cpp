// C/C++ program to remove all adjacent duplicates
// from a string
#include <iostream>
#include <string.h>
using namespace std;

// This function removes duplicates
void removeDup(char * str)
{
    int n= strlen(str);
    int i = -1;
    int j = 0;
    
    while(j<n)
    {
        if(j<n-1 && str[j]==str[j+1])
            j = j+2;
        else if(i>=0 && str[j]==str[i])
            i--, j++;
        else
        //when we need to copy the data to destination index i
        //then only increment that index.
            str[++i]=str[j++];
          
    }

    str[++i]='\0';
  
}

int main()
{
    char str1[] = "geeksforgeeg";
    cout << "Input => " << str1 << "\nOutput => ";
    removeDup(str1);
    cout << str1 << endl << endl;
    
    char str2[] = "azxxzy";
    cout << "Input => " << str2 << "\nOutput => ";
    removeDup(str2);
    cout << str2 << endl << endl;
    
    
    char str3[] = "gghhg";
    cout << "Input => " << str3 << "\nOutput => ";
    removeDup(str3);
    cout << str3 << endl << endl;
    return 0;
   

}
// Input => geeksforgeeg
// Output => gksfor

// Input => azxxzy
// Output => ay

// Input => gghhg
// Output => g


