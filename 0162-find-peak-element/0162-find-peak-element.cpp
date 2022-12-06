class Solution {
public:
int binaryCheck(vector<int>&nums,int st,int ed)
{
// small caluculation
//check with neighnors
int mid = st + (ed-st)/2;
int n = nums.size()-1;
bool left = mid ==0 || nums[mid-1]<=nums[mid];
bool right = mid ==n || nums[mid+1]<=nums[mid];
if(left&&right)
{
// returnong the mid index
return mid;
}
else if(!left)//yani left wala number bda hai mtlb ye peak hoo skta
{
ed = mid -1;
return binaryCheck(nums,st,ed);
}else if(!right)// yaani right wal apart bda hai mtlb peak right me hoo skta
{
st = mid+1;
return binaryCheck(nums,st,ed);
}
return -1;
}
int findPeakElement(vector<int>& nums) {
int st = 0;
int ed = nums.size()-1;
return binaryCheck(nums,st,ed);
}
};