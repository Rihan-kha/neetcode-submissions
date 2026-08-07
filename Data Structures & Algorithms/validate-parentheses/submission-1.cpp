class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        string par = "({[";
        for (char p:s){
            if (find(par.begin(), par.end(), p) != par.end()){
                st.push(p);
            } else if (not(st.empty())){
                if(p==')' and st.top() == '('){
                    st.pop();
                } else if (p=='}' and st.top() == '{'){
                    st.pop();
                } else if (p==']' and st.top()=='['){
                    st.pop();
                } else {
                    return false;
                }
            } else return false;
        }
        if (st.empty()) return true;
        return false;
        
    }
};
