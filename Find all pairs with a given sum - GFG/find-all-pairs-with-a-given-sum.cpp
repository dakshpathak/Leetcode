//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
    public:
    vector<pair<int,int>> allPairs(int A[], int B[], int N, int M, int X)
    {
        sort(A,A+N);
        sort(B,B+M);
        
        int si = 0 ;
        int ed = M-1;
        int sum = 0;
        
        vector<pair<int,int>> res;
        
        while(si<N&&ed>=0)
        {
            sum = A[si] + B[ed];
            
            if(sum==X)
            {
                pair<int,int> p (A[si],B[ed]);
                res.push_back(p);
                si++;
                ed--;
            }else if(X<sum)
            {
                ed--;
            }
            else if(X>sum)
            {
                si++;
            }
        }
        
    return res;
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