class Solution {
public:
    int maximumGap(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int i = 0;
        int j = 1;
        set<int> s;
         if(nums.size() < 2){
            return 0;
         }
              while(j < nums.size()){
                s.insert(nums[j] - nums[i]);
                i++;
                j++;
              }
         return *s.rbegin();
    }
};