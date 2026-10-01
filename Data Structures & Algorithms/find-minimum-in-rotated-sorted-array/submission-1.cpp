class Solution {
public:
    int findMin(vector<int> &nums) {
        int l=0;
        int ans=nums[0];
        int h=nums.size()-1;
        while(l<=h){
            if(nums[l]<nums[h]){
                ans=min(ans,nums[l]);
            }
            int m=l+(h-l)/2;
            if(nums[m]<ans){
            ans=nums[m];
            }
            if(nums[m]>=nums[l]){
                l=m+1;
            }
            else{
                h=m-1;
            }
        }
        return ans;
    }
};
