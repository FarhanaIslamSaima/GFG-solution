
// CPP program to find the maximum segment
// value after putting k breaks.
#include <bits/stdc++.h>
using namespace std;
 
// Function to Find Maximum Number
int findMaxSegment(string &s, int k) {
 
  // Maximum segment length
  int seg_len = s.length() - k;
 
  // Find value of first segment of seg_len
  int res = 0;
  for (int i=0; i<seg_len; i++)
     res = res * 10 + (s[i] - '0');
 
  // Find value of remaining segments using sliding
  // window
  int seg_len_pow = pow(10, seg_len-1);
  int curr_val = res;
  for (int i = 1; i <= (s.length() - seg_len); i++) {
 
    // To find value of current segment, first remove
    // leading digit from previous value   
    curr_val = curr_val - (s[i-1]- '0')*seg_len_pow;
 
    // Then add trailing digit
    curr_val = curr_val*10 + (s[i+seg_len-1]- '0');
 
    res = max(res, curr_val);
  }
  return res;
}
 
// Driver's Function
int main() {
  string s = "8754";
  int k = 2;
  cout << "Maximum number = " << findMaxSegment(s, k);
  return 0;
}