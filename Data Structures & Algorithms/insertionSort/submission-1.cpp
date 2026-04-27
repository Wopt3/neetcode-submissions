// Definition for a Pair
// class Pair {
// public:
//     int key;
//     string value;
//
//     Pair(int key, string value) : key(key), value(value) {}
// };
class Solution {
public:
    vector<vector<Pair>> insertionSort(vector<Pair>& pairs) {
        vector<vector<Pair>> anser;
        for(int i=0;i<pairs.size();i++){
            int j=i-1;
            int a=i;
            while(pairs[a].key<pairs[j].key&&j>=0){
                Pair tmp=pairs[j];
                pairs[j]=pairs[a];
                pairs[a]=tmp;
                j--;
                a--;
            }
            anser.push_back(pairs);
        }
        return anser;
    }
    
};
