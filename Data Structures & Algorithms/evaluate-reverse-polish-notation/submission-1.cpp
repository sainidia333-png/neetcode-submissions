class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int>s;
        int i,j,k;
        for(auto it: tokens){
            if(it!="+"&&it!="-"&&it!="*"&&it!="/"){
               s.push(stoi(it));
 
            }
            else{
                i=s.top();
                s.pop();
                j=s.top();
                s.pop();
                if(it=="+"){
                    k=j+i;
                }
                else if(it=="-"){
                    k=j-i;
                }
                else if(it=="*"){
                    k=j*i;
                }
                else{
                    k=j/i;
                }
                s.push(k);
            }
        }
        return s.top();
    }
};
