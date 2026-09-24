class MinStack {
public:
    stack<int>s;
       stack<int>mins;
    MinStack() {
     
    }
    
    void push(int val) {
        s.push(val);
        if(mins.empty()||val<mins.top()){
            mins.push(val);
        }
        else{
            mins.push(mins.top());
        }
    }
    
    void pop() {
        s.pop();
        mins.pop();
    }
    
    int top() {
       return s.top();
    }
    
    int getMin() {
       return mins.top();
    }
};
