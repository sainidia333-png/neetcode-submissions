class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int>s;
        int c=0,maxi=0;
        for(int i=0;i<nums.size();i++){
            s.insert(nums[i]);
        }
        for(auto it:s){
            if(s.find(it-1)==s.end()){
                int cur=it;
                c=1;
                while(s.find(cur+1)!=s.end()){
                    cur++;
                c++;
                }
                if(c>maxi){
                    maxi=c;
                }
            }
        }
        maxi=max(c,maxi);
        return maxi;
    }
};
