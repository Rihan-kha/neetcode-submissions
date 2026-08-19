class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> mp;
        for (int i=0; i<nums.size(); i++){
            int com = target - nums[i];
            if (mp[nums[i]]){
                return {mp[nums[i]],i+1};
            }
            mp[com] = i+1;
        } 
        return {1, 1};       
    }
};