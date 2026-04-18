class Solution {
public:
    int mirrorDistance(int n) {
        int num = n;
        int rev = 0;
        while(num > 0){
            int d = num % 10;
            rev = rev*10 + d;
            num /= 10;
        }
        return abs(n-rev);
    }
};