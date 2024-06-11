//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution{   
public:
    int findMissing(int arr[], int n) {
        int val = 0;
        for(int i = 0; i < n-1; i++) {
        val = val + (arr[i+1] - arr[i]);
        }
        int d = val/n;
        for(int i = 0; i< n-1; i++) {
            if(arr[i+1] - arr[i] != d) {
                return arr[i] + d;
            }
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
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.findMissing(arr, n);
        cout << ans << "\n";
    }
    return 0;
}

// } Driver Code Ends