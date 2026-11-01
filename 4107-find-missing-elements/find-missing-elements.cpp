class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<int> ans;
        int missing = nums[0];
        for(int j = 1;j < nums.size(); j++){
            while(missing < nums[j] - 1){
                missing ++;
                ans.push_back(missing);
            }
            missing = nums[j];
        }
        return ans;
    }
};