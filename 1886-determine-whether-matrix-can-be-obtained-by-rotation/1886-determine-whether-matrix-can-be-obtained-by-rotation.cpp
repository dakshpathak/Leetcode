class Solution {
public:
    bool findRotation(vector<vector<int>>& mat, vector<vector<int>>& target) {
        
        if (mat == target){
            return true;
        }
        
        for (int i =0; i<mat.size()+1; i++){
            
            
            for (int j = 0; j<mat.size(); j++){
                
                
                for (int k =0; k<j ; k++){
                    
                    swap(mat[j][k], mat[k][j]);
                }
            }
            
            for (int l =0 ; l<mat.size(); l++){
                reverse(mat[l].begin(), mat[l].end());
            }
            
            if (mat == target){
                return true;
            }
        }
        
        return false;
    }
};