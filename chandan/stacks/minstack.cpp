class MinStack {
public:
    stack<pair<int,int> > s;
    
    MinStack() {
        
    }
    
    void push(int val) {
        int minEle=INT_MAX;
        if(s.size()==0)
        {
            minEle=val;
        }
        else
        {
            minEle=min(val,s.top().second);
        }
        s.push({val,minEle});
    }
    
    void pop() {
        s.pop();
    }
    
    int top() {
        return s.top().first;
    }
    
    int getMin() {
        return s.top().second;
    }
};
