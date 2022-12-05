//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
    public:
    vector<pair<int,int>> allPairs(int A[], int B[], int N, int M, int X)
    {
        // Your code goes here  
        int si = 0, ei = M-1 , n1 = 0, n2 = 0;
        pair<int, int> p;
        vector<pair<int, int>> ans;
        
        sort (A, A+N);
        sort (B, B+M);
        
        while (si<N && ei>=0){
            
            if (A[si]+B[ei]==X){
                p.first = A[si];
                p.second = B[ei];
                ans.push_back(p);
                si++;
                ei--;
            }
            else if (A[si] + B[ei]>X){
                ei--;
            }
            else if (A[si] + B[ei] < X){
                si++;
            }
        }
        
        return ans;
        
    }
};


//{ Driver Code Starts.
int main() {
	long long t;
	cin >> t;
	
	while(t--){
	    int N, M, X;
	    cin >> N >> M >> X;
        int A[N], B[M];
        
	    for(int i = 0;i<N;i++)
	        cin >> A[i];
	    for(int i = 0;i<M;i++)
	        cin >> B[i];
	        
	   Solution ob;
	   vector<pair<int,int>> vp = ob.allPairs(A, B, N, M, X);
	   int sz = vp.size();
        if(sz==0)
        cout<<-1<<endl;
        else{
            for(int i=0;i<sz;i++){
                if(i==0)
                cout<<vp[i].first<<" "<<vp[i].second;
                else
                cout<<", "<<vp[i].first<<" "<<vp[i].second;
            }
            cout<<endl;
        }
	}
	return 0;
}
// } Driver Code Ends