//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:
	int search(string pat, string txt) {
	     int k = pat.size();
        int n = txt.size();
        if (k > n) return 0;  
        vector<int> a(26, 0), b(26, 0);
        
     
        for (char c : pat) {
            a[c - 'a']++;
        }

      
        for (int i = 0; i < k; i++) {
            b[txt[i] - 'a']++;
        }

        int x = 0;
        
        if (a == b) {
            x++;
        }

      
        for (int i = k; i < n; i++) {
            b[txt[i] - 'a']++;           
            b[txt[i - k] - 'a']--;      
            
          
            if (a == b) {
                x++;
            }
        }

        return x; 
	    
	   
	    // code here
	}

};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string pat, txt;
        cin >> txt >> pat;
        Solution ob;
        auto ans = ob.search(pat, txt);
        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends
