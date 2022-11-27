class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int index = -1, j =0;
        
        for (int i = nums.size()-2; i>=0; i--){
            
            if (nums[i]<nums[i+1]){
                index = i;
                break;
            }
        }
        
        if (index<0){
            sort (nums.begin(), nums.end());
        }
        else{
            
            for (int i = nums.size()-1; i>=index; i--){
                
                if (nums[i]>nums[index]){
                    j = i;
                    break;
                }
            }
            
            swap(nums[index], nums[j]);
            
            sort (nums.begin()+index+1, nums.end());
        }
    }
};