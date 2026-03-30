class Solution {
public:
    int pivotInteger(int n) {
        int S = n * (n + 1) / 2;
        int x = sqrt(S);

        if(x * x == S) return x;
        return -1;
    }
};