//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    string armstrongNumber(int n){
    int num1 = n % 10;
    int n2 = n / 10;
    int num2 = n2 % 10;
    int n3 = n2 / 10;
    int num3 = n3 % 10;
    int ans = pow(num1, 3)+pow(num2, 3)+pow(num3, 3);
    if (ans == n) {
        return "true";
    }
    else {
        return "false";
    }
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        Solution ob;
        cout << ob.armstrongNumber(n) << endl;
    }
    return 0;
}

// } Driver Code Ends