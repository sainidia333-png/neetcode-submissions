class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
       int l=1;
       int ma=0,maxi=0;
       int ans=0;
       for(int i=0;i<piles.size();i++){
        if(piles[i]>ma){
            ma=piles[i];
        }
        maxi=max(maxi,ma);
       }
        int hi=maxi;
        while(l<hi){
            int m = l + (hi-l)/2;
            int hours = 0;
            for(int i=0;i<piles.size();i++){
                hours += (piles[i] + m - 1) / m;
                }
               if(hours<=h){
                
                     hi = m;
               }
                else{
                             l = m + 1;
                }
                
            }
        
       return l;
    }
};
