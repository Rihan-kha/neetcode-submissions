class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int prod = 1;
        int zeros = -1;
        for (int i=0; i<nums.size(); i++){
            int num = nums[i];
            if (num == 0){
                if (zeros == -1){
                    zeros = i;
                }
                else{
                    zeros = -2;
                }
            }
            else{
                prod *= num;
            }
        }
        vector<int> ret;
        if (zeros == -2){
            ret.resize(nums.size(),0);
            return ret;
        }

        for (int num:nums){
            if (num!=0 and zeros != -1){
                ret.push_back(0);
            } else if (zeros == -1){
                ret.push_back(prod/num);
            } else{
                ret.push_back(prod);
            }
        }
        return ret;

    }
};
