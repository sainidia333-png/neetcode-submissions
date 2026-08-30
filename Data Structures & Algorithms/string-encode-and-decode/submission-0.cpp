class Solution {
public:

    string encode(vector<string>& strs) {
        string s="";
        for(string word:strs){
            s+=to_string(word.length());
            s+="#";
            s+=word;
        }
        return s;
    }

    vector<string> decode(string s) {
        vector<string>a;
        int i=0;
        while(i<s.size()){
            int j = i;
        while(s[j] != '#') {
            j++;
          }
          int length = stoi(s.substr(i, j-i));
          string word = s.substr(j + 1, length);
          a.push_back(word);
          i = j + 1 + length;
        }
        return a;
    }
};
