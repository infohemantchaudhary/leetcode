class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        int marked = -1;
        vector<int> ans;
        for(int i = 0 ; i < nums1.size() ; i++){
            for(int j = 0; j < nums2.size() ; j++){
                if(nums1[i] == nums2[j] && nums2[j] != marked ){
                    ans.push_back(nums2[j]);
                    nums2[j] = marked;
                    break;
                }
            }
        }
        return ans;
    }
};