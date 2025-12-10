class Solution {
public:
    int reversed(int n){
        int rev = 0;
        while(n > 0){
            rev = rev * 10 + n % 10;
            n /= 10;
        }
        return rev;
    }
    bool isSameAfterReversals(int num) {
        int res = reversed(num);
        int res1 = reversed(res);
        if(res1 == num) return true;
        return false;
    }
};