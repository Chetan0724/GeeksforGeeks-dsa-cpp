//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    string revStr(string s) {
        stack<char> st;
        
        for(int i = 0; i < s.length(); i++)
        {
            st.push(s[i]);
        }
        
        int j = 0;
        while(!st.empty())
        {
            s[j] = st.top();
            st.pop();
            j++;
        }
        
        return s;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        Solution ob;
        cout << ob.revStr(s) << endl;
        cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends