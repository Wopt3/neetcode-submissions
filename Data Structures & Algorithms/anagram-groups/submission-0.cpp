class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>> map;
        vector<vector<string>> answer;
        vector<int> alphabet(26,0);
        int tmp;
        int i=0;
        for(string st:strs){
            for(char ch:st){
                tmp=(int)ch;
                alphabet[tmp-97]++;
            }
            string key = "";
            for (int count : alphabet) {
                key += to_string(count) + "#";
            }
            if(map.count(key)){
                map[key].push_back(st);
            }
            else{
                map.insert({key,{st}});
            }
            fill(alphabet.begin(),alphabet.end(),0);
            
            
        }
        for (auto& entry : map) {
            answer.push_back(entry.second);
        }
        return answer;
    }
};
