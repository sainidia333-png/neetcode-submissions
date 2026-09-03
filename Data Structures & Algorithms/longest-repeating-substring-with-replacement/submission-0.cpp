class Solution {
public:
    int characterReplacement(string s, int k) {
        unordered_map<char,int>fr;
        int l=0,length=0,c=0,maxfreq=0;
        for(int r=0;r<s.length();r++){
            fr[s[r]]++;
            length=r-l+1;
            maxfreq=max(maxfreq,fr[s[r]]);
            if(length-maxfreq>k){

                fr[s[l]]--;
                l++;
                length=r-l+1;
                
            }
            c=max(c,length);
        }
        
        return c;

    }
};
