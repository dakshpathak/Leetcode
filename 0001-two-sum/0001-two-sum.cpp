class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
        
        int si =0, ei = nums.size()-1, n1, n2;
        
        vector<int> temp = nums;
        vector<int> ans;
        
        sort(nums.begin(), nums.end());
        
        while (si<=ei){
            
            if (nums[si]+nums[ei] == target){
                
                n1 = nums[si];
                n2 = nums[ei];
                break;
            }
            
            else if (nums[si]+nums[ei]>target){
                ei--;
            }
            else{
                si++;
            }
        }
        
        for (int i = 0; i<nums.size(); i++){
            
            if (temp[i] == n1){
                ans.push_back(i);
            }
            else if (temp[i]==n2){
                ans.push_back(i);
            }
        }
        
        return ans;
    }
};