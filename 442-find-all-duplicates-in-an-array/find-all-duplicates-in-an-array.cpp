class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        set<int> s;
        int ans = 0;
      sort(nums.begin(), nums.end());
      for(int i = 1 ; i < nums.size(); i++){
        if(nums[i] - nums[i-1] == 0){
            s.insert(nums[i]);
        }
      }
      vector<int> vtr;
      for(int num : s){
        vtr.push_back(num);
      }
      return vtr;
    }
};