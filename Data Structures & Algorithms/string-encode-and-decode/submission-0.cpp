class Solution {
public:
    string encode(vector<string>& strs) {
        string st;
        for (string str : strs) {
            st += to_string(str.size()) + "#" + str; 
        }
        return st;
    }

    vector<string> decode(string s) {
        vector<string> strs;
        int i = 0;
        while (i < s.size()) {
            int j = i;
            while (s[j] != '#') j++;
            int length = stoi(s.substr(i, j - i));

            string word = s.substr(j + 1, length);
            strs.push_back(word);

            i = j + 1 + length;
        }
        return strs;
    }
};
