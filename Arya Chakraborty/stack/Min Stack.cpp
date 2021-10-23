//https://leetcode.com/problems/min-stack/submissions/

//time complexity=O(1), for 1 call in the main function

class MinStack {
public:
    stack<int> s;
    stack<int> minS;
    MinStack() {
        
    }
    
    void push(int val) {
        s.push(val);
        if(minS.empty() || val<=minS.top())//if "val" proves itself the minimum element, it gets pushed into min stack
            minS.push(val);
    }
    
    void pop() {
        if(minS.top()==s.top()){//if the minimum element gets popped
            minS.pop();
            s.pop();
        }
        else s.pop();
    }
    
    int top() {//top of the normal stack
        return s.top();
    }
    
    int getMin() {//top of the min stack
        return minS.top();
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */