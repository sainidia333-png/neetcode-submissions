class Solution {
public:
    int lengthOfLongestSubstring(string s) {
       unordered_map<char,int>fr;
       int l=0,length=0,c=0;
       for(int r=0;r<s.length();r++){
            fr[s[r]]++;
            while(fr[s[r]]>1){
               
                fr[s[l]]--;
                 l++;
            }
               length=r-l+1;
               c=max(c,length);
                
       
       }
       return c; 
    }
};
