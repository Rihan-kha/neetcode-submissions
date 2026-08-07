class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> st;
        for (string str:tokens ){
            char ch = str[str.size()-1];
        
            if (ch-'0' <0){
                if (ch == '+'){
                    int var1 = st.top();
                    st.pop();
                    int var2 = st.top();
                    st.pop();
                    st.push(var2+var1);
                } else if (ch == '-'){
                    int var1 = st.top();
                    st.pop();
                    int var2 = st.top();
                    st.pop();
                    st.push(var2-var1);
                } else if (ch == '*'){
                    int var1 = st.top();
                    st.pop();
                    int var2 = st.top();
                    st.pop();
                    st.push(var2*var1);
                } else if (ch == '/'){
                    int var1 = st.top();
                    st.pop();
                    int var2 = st.top();
                    st.pop();
                    st.push(var2/var1);
                }
            } else {
                int num = 0;
                int sign = 1;
                for (char ch:str){
                    if (ch == '-') sign = -1;
                    else if (ch == '+') sign = 1;
                    else
                        num = num*10 + (ch-'0');
                }

                st.push(num*sign);
            }
        }
        return st.top();
        
    }
};
