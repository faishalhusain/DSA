class Solution {
public:
    int difftypes(vector<int>& arr){
        // take set because you have to store the unique values
         unordered_set<int> s(arr.begin(),arr.end());
         return s.size();
    }
    int distributeCandies(vector<int>& candyType) {
        int canEat = candyType.size() / 2;
        int low = 1, high = difftypes(candyType);
        while (low <= high){
            int mid = (low + high) / 2;
            if (mid <= canEat) low = mid + 1;
            else high = mid -1;
        }
        return high; 
    }
};