class Solution {
public:
    int commonFactors(int a, int b) {
        int cnt = 0;
        int n = max(a,b);
        while(n > 0){
            if(a % n == 0 && b % n == 0) cnt++;
            n -= 1;
        }
        return cnt;
    }
};