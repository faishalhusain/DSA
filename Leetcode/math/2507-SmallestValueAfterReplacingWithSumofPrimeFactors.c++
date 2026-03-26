class Solution {
public:
    int smallestValue(int n) {
        while (true) {
            int sum = 0;
            int x = n;

            for (int i = 2; i * i <= x; i++) {
                while (x % i == 0) {
                    sum += i;
                    x /= i;
                }
            }

            if (x > 1) sum += x;

            if (sum == n) return n;

            n = sum;
        }
    }
};