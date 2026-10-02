class TimeMap {
public:
    TimeMap() {
        
    }
    unordered_map<string, vector<pair<int,string>>>s;
   
    void set(string key, string value, int timestamp) {
        s[key].push_back({timestamp, value});
    }
    
    string get(string key, int timestamp) {
       if (s.find(key) == s.end())return "";
         int ans = -1;
         int l=0;
         int h=s[key].size()- 1;
         while(l<=h){
            int m=l+(h-l)/2;
            if(s[key][m].first<=timestamp){
                ans = m;
                l = m + 1;
            }
            else{
                h=m-1;
            }
         }
         if(ans==-1)return "";
         return s[key][ans].second;
    }
};
