class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int freq1[26]={0};
        int freq2[26]={0};
        for(int i=0;i<s1.length();i++){
            freq1[s1[i]-'a']++;
        }
        int l=0;
        //int len=s1.length();
        for(int r=0;r<s2.length();r++){
            freq2[s2[r]-'a']++;
            int ws=r-l+1;
            if (ws>s1.length()){
                freq2[s2[l]-'a']--;
                l++;
                ws=r-l+1;
            }
            if(ws==s1.length()){
                if(equal(freq1, freq1 + 26, freq2)){
                    return true;
                }
                
            }
       }
       return false;
    }
};
