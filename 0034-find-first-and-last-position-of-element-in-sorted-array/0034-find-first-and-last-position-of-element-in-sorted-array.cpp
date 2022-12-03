class Solution {
public:
    int lastoccurence(int si, int ei, vector<int> &nums, int target){
        int last = -1;
        
        while (si<=ei){
            int mid = (si+ei)/2;
            
            if (nums[mid]==target){
                last = mid;
                si = mid+1;
            }
            else if (target>nums[mid]){
                si = mid+1;
            }
            else{
                ei = mid-1;
            }
        }
        return last;
    }
    
    
    int firstoccurence(int si, int ei, vector<int> &nums, int target){
        int first = -1;
        
        while (si<=ei){
            int mid = (si+ei)/2;
            
            if (nums[mid]==target){
                first = mid;
                ei = mid-1;
            }
            else if (target>nums[mid]){
                si = mid+1;
            }
            else{
                ei = mid-1;
            }
        }
        return first;
    }
    
    vector<int> searchRange(vector<int>& nums, int target) {
        
        vector<int> ans;
        
        int first = firstoccurence (0, nums.size()-1, nums, target);
        ans.push_back(first);
        
        int last = lastoccurence(0, nums.size()-1, nums, target);
        ans.push_back(last);
        
        return ans;
    }
};