class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        int size = temperatures.size();
        vector<int> ret(size,0);
        stack<int> st;
        for (int i = 0; i< size; i++){
            if (st.empty()){
                st.push(i);
            }
            else {
                while (not(st.empty())){
                    int top = temperatures[st.top()];
                    if (top<temperatures[i]){
                        ret[st.top()] = i-st.top();
                        st.pop();
                    } else{
                        st.push(i);
                        break;
                    }
                }
                if (st.empty()) st.push(i);
            }

        }
        return ret;
        
    }
};
