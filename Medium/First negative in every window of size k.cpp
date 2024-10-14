//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

vector<long long> printFirstNegativeInteger(long long int arr[],
                                             long long int n, long long int k);

// Driver program to test above functions
int main() {
    long long int t, i;
    cin >> t;
    while (t--) {
        long long int n;
        cin >> n;
        long long int arr[n];
        for (i = 0; i < n; i++) {
            cin >> arr[i];
        }
        long long int k;
        cin >> k;

        vector<long long> ans = printFirstNegativeInteger(arr, n, k);
        for (auto it : ans) cout << it << " ";
        cout << endl;
    }
    return 0;
}

// } Driver Code Ends


vector<long long> printFirstNegativeInteger(long long int A[], long long int N, long long int K) {
    
  int l=0;
    int x=0;
    vector<long long>ans,tmp;
   int ll=0;
    while(ll<N)
    {
        if(A[ll]<0)
        {
            tmp.push_back(A[ll]);
        }
        if(ll-l+1!=K)
        {
            ll++;
        }
        else if(ll-l+1==K)
        {
            if(tmp.empty())
            {
                ans.push_back(0);
            }
            else{
                ans.push_back(tmp[0]);
                if(A[l]<0)
                {
                    tmp.erase(tmp.begin());
                    
                }
                
            }
            ll++;
            l++;
        }
    }
    
    return ans;
    
    
    
  
 }
