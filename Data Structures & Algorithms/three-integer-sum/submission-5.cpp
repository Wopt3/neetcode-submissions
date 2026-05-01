class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> ans;
        sort(nums.begin(),nums.end());
        int l=0,r=0;
        for(int i=0;i<nums.size()-2;i++){
            if(i>0&&nums[i-1]==nums[i])continue;
            if(nums[i]>0)break;
            l=i+1;
            r=nums.size()-1;
            while(l<r){
                int sum=nums[i]+nums[l]+nums[r];
                if(sum>0){
                    r--;
                }
                else if(sum<0){
                    l++;
                }
                else{
                    
                    ans.push_back({nums[i],nums[l],nums[r]});
                    l++;r--;
                    while(nums[r+1]==nums[r]){
                        r--;
                    }
                }

            }

        }   
        return ans;
    }
};
