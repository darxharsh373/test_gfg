//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    int binaryToDecimal(string &b) {
        int decimal=0;
        int length=b.length();
        for(int i=0;i<length;i++){
            if(b[length-i-1]=='1'){
                decimal+=pow(2,i);
            }
        }
        return decimal;
    }
};


//{ Driver Code Starts.
int main() {
    int T;
    cin >> T;
    while (T--) {
        string str;
        cin >> str;
        Solution ob;
        int ans = ob.binaryToDecimal(str);
        cout << ans << "\n";

        cout << "~"
             << "\n";
    }
    return 0;
}
// } Driver Code Ends