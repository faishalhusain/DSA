class Solution {
public:
    int furthestDistanceFromOrigin(string moves) {
         int pos = 0, blank = 0;
        for(char c : moves){
            if(c == 'R') pos++;
            else if(c == 'L') pos--;
            else blank++;
        }
        return abs(pos) + blank;
    }
};