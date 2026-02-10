class Solution {
    int checkif(string s){
        int cnt = 0;
        for(int i = 1;i<s.size()-1;i++){
            if((s[i] > s[i-1] && s[i] > s[i+1]) || (s[i] < s[i-1] && s[i] < s[i+1]))
            cnt += 1;
        }
        return cnt;
    }
public:
    int totalWaviness(int num1, int num2) {
        int waviness = 0;
        if(num2 < 99) return 0;
        for(int i = num1; i<= num2;i++) waviness += checkif(to_string(i));
        return waviness;
    }
};