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
    vector<Pair> merge(vector<Pair> left, vector<Pair> right){
        int l=0;
        int r=0;
        vector<Pair> answer;
        while(l<left.size() && r<right.size()){
            if(left[l].key<=right[r].key){
                answer.push_back(left[l]);
                l++;
            }
            else{
                answer.push_back(right[r]);
                r++;
            }
        }
        while(l<left.size()){
            answer.push_back(left[l]);
            l++;
        }
        while(r<right.size()){
            answer.push_back(right[r]);
            r++;
        }
        return answer;
    }

    vector<Pair> mergeSort(vector<Pair>& pairs) {
        int l=pairs.size()/2;
        if(pairs.size()<=1){
            return pairs;
        }
        vector<Pair> left;
        for(int i=0;i<l;i++){
            left.push_back(pairs[i]);
        }
        vector<Pair> right;
        for(int i=l;i<pairs.size();i++){
            right.push_back(pairs[i]);
        }
        left=mergeSort(left);
        right=mergeSort(right);

        vector<Pair> answer=merge(left,right);

        return answer;
    }
};
