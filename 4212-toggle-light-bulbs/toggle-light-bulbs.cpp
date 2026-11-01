class Solution {
public:
    vector<int> toggleLightBulbs(vector<int>& bulbs) {
        set<int> st;
        for(int i = 0; i < bulbs.size(); i++){
            if(st.count(bulbs[i])){
                st.erase(bulbs[i]);
            }else{
                st.insert(bulbs[i]);
            }
        }
        int num = 0;
        vector<int> ans;
        for(int num : st){
            ans.push_back(num);
        }
        return ans;
    }
};