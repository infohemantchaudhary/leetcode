class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        sort(nums.begin() , nums.end());
       int duplicate = 0;
       int missing = 0;
       int n = nums.size();
    for(int i = 1; i < n ;i++ ){
         if (nums[i] == nums[i - 1]) {
            duplicate = nums[i];
         }
    }
    for(int i = 1; i <= n; i++){
        if(find(nums.begin(),nums.end(), i) == nums.end()){
            missing = i;
            break;
        }
    }
    return {duplicate , missing};
    }
};