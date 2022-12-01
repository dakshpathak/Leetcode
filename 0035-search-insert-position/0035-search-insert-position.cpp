class Solution {
public:
    int binary (int si, int ei, vector<int> & nums, int target){
        
        while (si<=ei){
            
            int mid = (si+ei)/2;
            
            if (nums[mid] == target){
                return mid;
            }
            else if (target<nums[mid]){
                ei = mid-1;
            }
            else if (target>nums[mid]){
                si = mid+1;
            }
        }
        return ei+1;
    }
    
    int searchInsert(vector<int>& nums, int target) {
        int index = binary (0,nums.size()-1, nums, target);
        return index;
    }
};