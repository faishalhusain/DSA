class Solution {
    void function(int open, int close, int n, string &s, vector<string> &temp){
        if(open == n and close == n){
            temp.push_back(s);
            return;
        }
        if(open < n){
            s.push_back('(');
            function(open + 1, close, n, s, temp);
            s.pop_back();
        }
        if(close < open) {
            s.push_back(')');
            function(open, close+1, n, s, temp);
            s.pop_back();
        }
    }
public:
    vector<string> generateParenthesis(int n) {
        vector<string> res;
        string str;
       function(0,0,n,str,res);
       return res;
    }
};