class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        
        vector<int> ans;
        
        int right = matrix[0].size()-1, left = 0, top =0, bottom = matrix.size()-1, dir = 0;
        
        while (top<=bottom && left<=right){
            
            if (dir == 0){
                
                for (int i = left; i<=right; i++){
                    
                    ans.push_back(matrix[top][i]);
                    
                }
                top +=1;
            }
            else if (dir == 1){
                
                for (int i = top; i<=bottom; i++){
                    ans.push_back(matrix[i][right]);
                    
                }
                right-=1;
            }
            
            else if (dir == 2){
                
                for (int i = right; i>=left; i--){
                    ans.push_back (matrix[bottom][i]);
                   
                }
                 bottom -=1;
            }
            else if (dir == 3){
                for (int i = bottom; i>=top; i--){
                    ans.push_back(matrix[i][left]);
                    
                }
                left +=1;
            }
            
            dir = (1+dir)%4;
        }
        
        return ans;
    }
};