class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
       
        
        int sum = 0, cnt =0;
        
        unordered_map <int, int> map;
        
        map[sum]  = 1;
        
        for (auto i : nums){
            
            sum+=i;
            
            int diff = sum-k;
            
            if (map.find(diff) != map.end()){
                
                cnt+= map[diff];
            }
            map[sum]++;
        }
        
        return cnt;
    }
};