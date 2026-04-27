class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char,int> map_s;
        for(char c:s){
            map_s[c]++;
        }
        unordered_map<char,int> map_t;
        for(char c:t){
            map_t[c]++;
        }
        return map_t==map_s;
    }
};
