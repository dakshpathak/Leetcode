class Solution {
public:
    int findMin(vector<int>& nums) {
        
         if(nums.size()==1) return nums[0];
       int s = 0;
       int e = nums.size()-1;
       int f = nums[0];
       while(s<=e){
           int mid = (s+e)/2;
           if(mid>0 &&  mid<nums.size()-1 && nums[mid]<nums[mid+1]&& nums[mid]<nums[mid-1]) return nums[mid];
           else if(mid>0 && mid==nums.size()-1 && nums[mid]<nums[mid-1]) return nums[mid];
           else  if(nums[mid]>=f){
               s = mid+1;
           }
           else if(nums[mid]<f){
               e = mid-1;
           }
           //else break;
       }
       return f;
    }
};