class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> ret;
        unordered_map<string,vector<string>> mp;

        for (string s:strs){
            vector<int> freq(26,0);
            for (char c: s)
                freq[c-'a']++;
            string key;
            for (int count:freq)
                key +="#" + to_string(count);
            mp[key].push_back(s);          
        }
        for (auto &entry:mp){
            ret.push_back(entry.second);
        }
        return ret;
    }
};
