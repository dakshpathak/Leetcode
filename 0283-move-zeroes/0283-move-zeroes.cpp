class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        
        int i, j, k, temp;
        
        //checking first occurence of 0
        while (k<nums.size()){
            
            if (nums[k]!=0){
                k++;
            }
            
            else{
                break;
            }
        }
        
        i = k, j = k+1;
        
        while (i<nums.size() && j<nums.size()){
            
            if (nums[j]!= 0){
                
                temp = nums[j];
                nums[j] = nums[i];
                nums[i] = temp;
                i++;
        }
            else{
                j++;
            }
    }
    }
};