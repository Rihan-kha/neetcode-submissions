class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> ret(n,1);
        int pre = 1;
        for (int i = 0; i< n; i++){
            ret[i] = pre;
            pre *= nums[i];
        }
        pre = 1;
        for (int i = n-1; i>=0; i--){
            ret[i] *=pre;
            pre *= nums[i];
        }
        return ret;

    }
};
