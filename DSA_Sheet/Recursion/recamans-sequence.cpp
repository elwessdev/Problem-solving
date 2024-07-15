//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
    int rec(int n, vector<int>& ans, unordered_set<int>& seen) {
        if (n == 0) {
            ans.push_back(0);
            seen.insert(0);
            return 0;
        }
        int prev = rec(n - 1, ans, seen);
        int curr = prev - n;
    
        if (curr > 0 && seen.find(curr) == seen.end()) {
            ans.push_back(curr);
            seen.insert(curr);
        } else {
            curr = prev + n;
            ans.push_back(curr);
            seen.insert(curr);
        }
        return curr;
    }
    vector<int> recamanSequence(int n) {
        vector<int> ans;
        unordered_set<int> seen;
        rec(n - 1, ans, seen);
        return ans;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        
        Solution ob;
        vector<int> ans = ob.recamanSequence(n);
        for(int i = 0;i < n;i++)
            cout<<ans[i]<<" ";
        cout<<"\n";
    }
    return 0;
}
// } Driver Code Ends