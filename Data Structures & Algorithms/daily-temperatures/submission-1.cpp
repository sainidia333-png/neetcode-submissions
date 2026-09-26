class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        vector<int>v(temperatures.size(), 0);
        stack<pair<int,int>>s;
       
        s.push({0,temperatures[0]});
        for(int i=1;i<temperatures.size();i++){
            while(!s.empty()&&temperatures[i]>s.top().second){
                //s.pop();
               v[s.top().first] = i - s.top().first;
                s.pop();
                
            }
           s.push({i,temperatures[i]});
        }
        return v;
    }
};
