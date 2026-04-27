class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        std::vector<int>& tmp=nums;
        for(int i=0;i<nums.size();i++){
            for(int j=0;j<tmp.size();j++){
                if(i!=j){
                    if(nums[i]==tmp[j]){
                        return true;
                    }
                }
            }
        }
        return false;
    }
};
