class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<vector<int>> ans;
        
        for(int i=0;i<nums.size()-2;i++){
            if(i>0){
                if(nums[i]==nums[i-1])continue;
            }
            int l=i+1;
            int r=nums.size()-1;
            while((l<r)){
                if((nums[l]+nums[r]+nums[i])<0){
                    l++;
                }
                else if((nums[l]+nums[r]+nums[i])>0){
                    r--;
                }
                else{
                    ans.push_back({nums[i],nums[r],nums[l]});
                    l++;
                    r--;
                    while(l<r&&nums[l]==nums[l-1]){
                        l++;
                    }
                }
            }
            
            
        }
        return ans;
    }
};