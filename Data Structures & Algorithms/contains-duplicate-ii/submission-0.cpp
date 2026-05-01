class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_set<int> set;
        int r=0,l=0;
        for(int i=0;i<nums.size();i++){
            if(set.contains(nums[i]))return true;
            else{
                set.insert(nums[r]);
                r++;
            }
            if(i>=l+k){
                set.erase(nums[l]);
                l++;
            }
        }
        return false;
    }
};