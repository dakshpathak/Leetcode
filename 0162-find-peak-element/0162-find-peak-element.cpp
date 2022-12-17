class Solution {
public:
    int binaryCheck (vector <int>&nums, int ei, int si){
        
        int mid = (ei+si)/2;
        int n  = nums.size()-1;
        
        bool left = mid == 0 || nums[mid-1]<= nums[mid];
        bool right = mid == n || nums[mid+1]<=nums[mid];
        
        if (left && right){
            return mid;
        }
        else if (!left){
            ei = mid-1;
            return binaryCheck (nums,ei,si);
        }
        else if (!right){
            si = mid+1;
            return binaryCheck (nums, ei, si);
        }
        return -1;
    }
    
    int findPeakElement(vector<int>& nums) {
        return binaryCheck(nums, nums.size()-1, 0);
    }
};