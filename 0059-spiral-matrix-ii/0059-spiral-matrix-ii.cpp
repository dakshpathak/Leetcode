class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
         vector<vector<int>> matrix(n,vector<int>(n,0));
        
        
        int top = 0;
        int bottom = n-1;
        int left = 0;
        int right = n-1;
        
        int dir=0;
        
        int total = n*n;
        int cnt=1;
        
        
        
        while(top<=bottom && left<=right)
        {
            if(dir==0)
            {
             for(int i = left; i <= right;i++)
            {
                matrix[top][i]=cnt;
                cnt++;
            }
                top++;
                dir=1;
            }else if(dir==1)
            {
                for(int i = top; i<=bottom; i++)
                {
                    matrix[i][right]=cnt;
                    cnt++;
                }
                
                right--;
                dir=2;
            }else if(dir==2)
            {
                for(int i = right; i >=left;i--)
                {
                    matrix[bottom][i] = cnt;
                    cnt++;
                }
                dir=3;
                bottom--;
            }else if(dir==3)
            {
                for(int i = bottom; i>=top;i--)
                {
                    matrix[i][left]=cnt;
                    cnt++;
                }
                dir=0;
                left++;
            }
        }
        
        
        
        
        return matrix;


    }
};