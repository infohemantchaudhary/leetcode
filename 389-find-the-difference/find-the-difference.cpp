class Solution {
public:
    char findTheDifference(string s, string t) {
        vector<bool> used(s.size() , false);
        for(int i = 0; i < t.size(); i++){
            bool found = false;
            for(int j = 0; j < s.size() ; j++){
                if(t[i] == s[j] && !used[j] ){
                    used[j] = true;
                    found = true;
                    break;
                }
            } 
            if(!found){
            return t[i];
            }
        }
    return ' ';
    }
};