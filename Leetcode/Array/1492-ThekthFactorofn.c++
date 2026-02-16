class Solution {
public:
    int kthFactor(int n, int k) {
        vector<int> fact;
        for(int i = 1;i<=n;i++){
            if(n % i == 0) fact.push_back(i);
        }
        int res = 0;
        if(fact.size() < k) return -1;
        else{
            for(int i = 0;i<k;i++) res = fact[i];
        }
        return res;
    }
};