//bruteforce approach

class Solution {
public:
    int countTriples(int n) {
        int cnt = 0;
        for(int i = 1;i<=n;i++){
            for(int j = 1;j<=n;j++){
                for(int k = 1;k<=n;k++){
                    if((i*i + j*j) == k*k) cnt++;
                }
            }
        }
        return cnt;
    }
};

// optimized approach using Binary Search

class Solution {
public:
    int countTriples(int n) {
        int count = 0;
        for(int c = 1; c <= n; c++) {
            int c2 = c * c;
            for(int a = 1; a < c; a++) {
                int b2 = c2 - a * a;
                int b = sqrt(b2);
                if(b >= 1 && b <= n && b * b == b2) count++;
            }
        }

        return count;
    }
};
