class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> mp;
        for (int i = 0; i<nums.size(); i++){
            mp[nums[i]]++;
        }

        vector<int> ret;
        unordered_map<int,vector<int>> mp2;
        int max = INT_MIN;
        for (auto &event:mp){
            mp2[event.second].push_back(event.first);
            max = (max>event.second)?max:event.second;
        }
        while(k){
            vector<int> temp = mp2[max];
            for (int i:temp){
                ret.push_back(i);
                k--;
                if (k==0) break;
            }
            max--;
        }

                



        return ret;
    }
};
