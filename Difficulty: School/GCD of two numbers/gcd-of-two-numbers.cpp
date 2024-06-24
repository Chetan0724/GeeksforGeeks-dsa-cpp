//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    int gcd(int a, int b) {
        
        // Euclid's Algorithm
        
        // Base Case
        if(a == b) return b;
        if(b == 0) return a;
        
        while(a > 0 && b > 0) {
            if(a > b) {
                a = a - b;
            }
            else {
                b = b - a;
            }
        }
        return a == 0 ? b : a;
    }
};


//{ Driver Code Starts.

int main(){
    int t;
    scanf("%d ",&t);
    while(t--){
        
        int a;
        scanf("%d",&a);
        
        
        int b;
        scanf("%d",&b);
        
        Solution obj;
        int res = obj.gcd(a, b);
        
        cout<<res<<endl;
        
    }
}

// } Driver Code Ends