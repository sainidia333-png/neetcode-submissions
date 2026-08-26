class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
         vector<vector<int>>v;
         int l;
         int r;
         sort(nums.begin(),nums.end());
         for(int i=0;i<nums.size();i++){
            l=i+1;
            r=nums.size()-1;
            if(i>0&&nums[i]==nums[i-1])continue;
            while(l<r){
                
            if(nums[l]+nums[r]+nums[i]==0){
                v.push_back({nums[l],nums[r],nums[i]});
                l++;
                r--;
                while(l<r&&nums[l]==nums[l-1])l++;
                while(l<r&&nums[r]==nums[r+1])r--;
            }
            else if(nums[l]+nums[r]+nums[i]<0){
                l++;
            }
            else{
                r--;
            }
         }
         }
         return v;
    }
};
