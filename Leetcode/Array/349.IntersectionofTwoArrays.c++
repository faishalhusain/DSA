class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        set<int> st;
        unordered_map<int,int> mpp;
        for(int i = 0;i<nums1.size();i++){
            mpp[nums1[i]] = i;
        }
        for(int i = 0;i<nums2.size();i++){
            if(mpp.find(nums2[i]) != mpp.end()) {
                st.insert(nums2[i]);
            }
        }
         return vector<int>(st.begin(), st.end());
    }
};