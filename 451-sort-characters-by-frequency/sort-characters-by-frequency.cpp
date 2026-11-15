class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char,int> mp;
        for(int i = 0; i < s.size(); i++){
            mp[s[i]]++;
        }
        vector<pair<char,int>> v;
        for(auto it : mp){
            v.push_back({it.first, it.second});
        }
        sort(v.begin(), v.end(), [](auto a, auto b){
            return a.second > b.second;
        });
        string ans = "";
        for(auto it : v){
            ans += string(it.second, it.first);
        }
        return ans;
    }
};
