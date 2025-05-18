//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends



class Solution {
  public:
    vector<int> nthRowOfPascalTriangle(int n) {
    
        const int MOD =1e9+7;
        vector<int>row;
        long long val=1;
        row.push_back(1);
        for (int i=1;i<n;i++){
            val=val*(n-i);
            val=val/i;
            val%=MOD;
            row.push_back((int)val);
        }
        return row;
    }
};





//{ Driver Code Starts.

void printAns(vector<int> &ans) {
    for (auto &x : ans) {
        cout << x << " ";
    }
    cout << "\n";
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        Solution ob;
        auto ans = ob.nthRowOfPascalTriangle(n);
        printAns(ans);

        cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends