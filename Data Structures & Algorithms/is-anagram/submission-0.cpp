class Solution {
public:
    bool isAnagram(string s, string t) {
        int tables[26]={0};int tablet[26]={0};
        int tmp;
        for(char i:s){
            tmp=(int)i;
            tables[tmp-97]+=1;
        }
        for(char i:t){
            tmp=(int)i;
            tablet[tmp-97]+=1;
        }
        for(int i=0;i<26;i++){
            if(tables[i]!=tablet[i]){
                return false;
            }
        }
        return true;
    }
    
};
