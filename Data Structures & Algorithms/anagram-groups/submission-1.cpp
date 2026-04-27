class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>>answer;
        unordered_map<string,int>map;
        int index=0;
        for(auto s: strs){
            string tmp=s;
            sort(tmp.begin(),tmp.end());
            if(map.contains(tmp)){
                answer[map[tmp]].push_back(s);
            }
            else{
                map[tmp]=index;
                answer.push_back({s});
                index++;
            }
            
        }
        return answer;
    }
};
