class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        unordered_map<char,int> s1_map;
        unordered_map<char,int> window_map;

        for(auto c:s1){
            s1_map[c]++;

        }
        int l=0;
        for(int r=0;r<s2.size();r++){
            
            window_map[s2[r]]++;
            if(r-l+1>s1.size()){
                if(window_map[s2[l]]==1)window_map.erase(s2[l]);
                else{
                    window_map[s2[l]]--;
                }
                l++;
            }
            
            if(s1_map==window_map)return true;
        }
        return false;
    }

};
