class Solution {
public:
    int dominantIndex(vector<int>& nums) {
       
        int maximum = 0;
        int index = 0;
        for(int i = 0; i < nums.size() ; i++){
           maximum = max(maximum , nums[i]);
           if(nums[i] == maximum){
            index = i;
           }
        }
        for(int i = 0; i < nums.size(); i++){
            if(maximum < nums[i] * 2 && nums[i] != maximum){
                return -1;
            }
        }
        return index;
    }
};