//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

// User function Template for C++

void precise(float a, float b) {
    // perform a/b
    float c=a/b;
    
    
    
    
    
    cout << /*output the result of a/b here*/c << " " << setprecision(3)
         << /*use fixed here*/fixed << /*Output c here*/c << endl;
}


//{ Driver Code Starts.
void precise(float, float); // prototype

// Driver Code
int main() {
    int t;
    cin >> t;
    while (t--) {
        float a, b;
        cin >> a >> b; // Taking input of a and b in floating types
        precise(a, b);

        cout << "~"
             << "\n";
    }
    return 0;
}
// } Driver Code Ends