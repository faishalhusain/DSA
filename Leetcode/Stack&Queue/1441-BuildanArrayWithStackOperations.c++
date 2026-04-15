class Solution {
public:
    vector<string> buildArray(vector<int>& target, int n) {
        stack<int> st;
        vector<string> res;
        int j = 0;
        for(int i = 1; i<=n; i++){
            if(j >= target.size()) break;
            st.push(i);
            res.push_back("Push");
            if(st.top() != target[j]){
                st.pop();
                res.push_back("Pop");
            } else {
                j++;
            }
        }
        return res;
    }
};