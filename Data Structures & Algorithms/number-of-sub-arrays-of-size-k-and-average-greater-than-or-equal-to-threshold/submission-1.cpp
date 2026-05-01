class Solution {
public:
    int numOfSubarrays(vector<int>& arr, int k, int threshold) {
        int sum;
        int l=0;
        int counter=0;
        for(int i=0;i<arr.size();i++){
            sum+=arr[i];
            if(i+1>=l+k){
                if(i+1>l+k){
                    sum-=arr[l];
                    l++;
                }
                if(sum/k>=threshold){
                    counter++;
                }
            }

        }
        return counter;
    }
};