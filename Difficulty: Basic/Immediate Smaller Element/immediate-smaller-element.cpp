//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++
class Solution {
  public:
    void immediateSmaller(vector<int>& arr) {
        int sizeofvector = arr.size();
        
        int i = 0;
        int j = i + 1;
        while(i < sizeofvector - 1)
        {
            if(arr[j] < arr[i])
            {
                arr[i] = arr[j];
            }
            else
            {
                arr[i] = -1;
            }
            i++;
            j++;
        }
        arr[sizeofvector-1] = -1;
    }
};

//{ Driver Code Starts.

int main() {
    string ts;
    getline(cin, ts);
    int t = stoi(ts);
    while (t--) {
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        Solution obj;
        obj.immediateSmaller(arr);
        for (int i = 0; i < arr.size(); i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
        cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends