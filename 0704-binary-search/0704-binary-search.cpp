class Solution {
public:
    int binary (int si, int ei, int target, vector<int> & nums ){
        
        while (ei>=si){
            int mid = (ei+si)/2;
            if (nums[mid]==target){
            return mid;
        }
        
        else if (nums[mid]<target){
            si = mid+1;
        }
        else{
            ei = mid -1;
        }
        }     
        return -1;
    }
    
    int search(vector<int>& nums, int target) {
        int ans = binary(0, nums.size()-1, target, nums);
        
        return ans;
    }
};