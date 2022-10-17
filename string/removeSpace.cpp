
// CPP program to Remove spaces
// from a given string
 
#include <iostream>
#include <algorithm>
using namespace std;
 
// Function to remove all spaces from a given string

 
// Driver program to test above function
int main()
{
    string str = "g eeks for ge eeks ";
     str.erase(remove(str.begin(), str.end(), ' '), str.end());
    cout << str;
    return 0;
}
 